#include "billentry.h"
#include "ui_billentry.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QDateTime>

BillEntry::BillEntry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BillEntry)
{
    ui->setupUi(this);

    QSqlQuery queryCust("SELECT customer_no, customer_name FROM customers WHERE active_status = 1");
    while (queryCust.next()) {
        int idx = ui->comboCustomer->count();
        ui->comboCustomer->insertItem(idx, "");
        ui->comboCustomer->setItemData(idx, queryCust.value("customer_name").toString(), Qt::DisplayRole);
        ui->comboCustomer->setItemData(idx, queryCust.value("customer_no").toString(), Qt::StatusTipRole);
    }

    QSqlQuery query("SELECT product_no, product_name FROM products WHERE active_status = 1");
    while (query.next()) {
        int idx = ui->comboProduct->count();
        ui->comboProduct->insertItem(idx, "");
        ui->comboProduct->setItemData(idx, query.value("product_name").toString(), Qt::DisplayRole);
        ui->comboProduct->setItemData(idx, query.value("product_no").toString(), Qt::StatusTipRole);
    }

    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());

    ui->tableBill->setColumnWidth(0, 50);
    ui->tableBill->setColumnWidth(1, 250);
    ui->tableBill->setColumnWidth(2, 80);
    ui->tableBill->setColumnWidth(3, 100);
    this->on_pBCancel_clicked();

    queryModel = new QSqlQueryModel(this);
    queryModel->setQuery("SELECT SAL.sale_no, SAL.sale_date, CUST.customer_name, CUST.customer_mobileno, SAL.sale_total"
                         " FROM sales SAL"
                         " INNER JOIN customers CUST ON CUST.customer_no = SAL.customer_no"
                         " ORDER BY SAL.sale_no DESC");


    queryModel->setHeaderData(0, Qt::Horizontal, "#");
    queryModel->setHeaderData(1, Qt::Horizontal, "Date");
    queryModel->setHeaderData(2, Qt::Horizontal, "Customer");
    queryModel->setHeaderData(3, Qt::Horizontal, "Mobile No");
    queryModel->setHeaderData(4, Qt::Horizontal, "Total");
    ui->tableList->setModel(queryModel);

    ui->tableList->setColumnWidth(0, 50);
    ui->tableList->setColumnWidth(1, 130);
    ui->tableList->setColumnWidth(2, 180);
    ui->tableList->setColumnWidth(3, 100);
}

BillEntry::~BillEntry()
{
    delete ui;
}

void BillEntry::on_comboCustomer_activated(int index)
{
    QSqlQuery query("SELECT * FROM customers WHERE customer_no = "+QString::number(ui->comboCustomer->itemData(index, Qt::StatusTipRole).toInt())+"");
    if (query.next()) {
        ui->lEAddress->setText(query.value("customer_address").toString());
        ui->lEPlace->setText(query.value("customer_place").toString());
        ui->lEMobileNo->setText(query.value("customer_mobileno").toString());
    }
}

void BillEntry::on_comboProduct_activated(int index)
{
    QSqlQuery query("SELECT * FROM products WHERE product_no = "+QString::number(ui->comboProduct->itemData(index, Qt::StatusTipRole).toInt())+"");
    if (query.next()) {
        ui->lERate->setText(query.value("sales_price").toString());
        ui->lEQty->setFocus();
    }
}

void BillEntry::on_pBtnAdd_clicked()
{
    if (ui->lEQty->text().toDouble() == 0) {
        QMessageBox::information(this, "Missing", "Qty");
        ui->lEQty->setFocus();
        return;
    }

    ui->tableBill->insertRow(ui->tableBill->rowCount());
    ui->tableBill->setItem(ui->tableBill->rowCount()-1, 0, new QTableWidgetItem(ui->comboProduct->itemData(ui->comboProduct->currentIndex(), Qt::StatusTipRole).toString()));
    ui->tableBill->setItem(ui->tableBill->rowCount()-1, 1, new QTableWidgetItem(ui->comboProduct->currentText()));
    ui->tableBill->setItem(ui->tableBill->rowCount()-1, 2, new QTableWidgetItem(ui->lEQty->text()));
    ui->tableBill->setItem(ui->tableBill->rowCount()-1, 3, new QTableWidgetItem(ui->lERate->text()));
    ui->tableBill->setItem(ui->tableBill->rowCount()-1, 4, new QTableWidgetItem(QString::number(ui->lEQty->text().toDouble() * ui->lERate->text().toDouble(),'f',2)));

    double total = 0;
    for (int row = 0; row < ui->tableBill->rowCount(); ++row) {
        total+=ui->tableBill->model()->index(row, 4).data(0).toDouble();
    }
    ui->labelTotal->setText(QString::number(total,'f',2));

    ui->lEQty->clear();
    ui->lERate->clear();
    ui->comboProduct->setCurrentIndex(-1);
    ui->comboProduct->setFocus();
}

void BillEntry::on_pBtnDelLine_clicked()
{
    if (ui->tableBill->currentIndex().isValid()) {
        ui->tableBill->removeRow(ui->tableBill->currentRow());
    }

    double total = 0;
    for (int row = 0; row < ui->tableBill->rowCount(); ++row) {
        total+=ui->tableBill->model()->index(row, 4).data(0).toDouble();
    }
    ui->labelTotal->setText(QString::number(total,'f',2));
}

void BillEntry::

    on_pBSave_clicked()
{
    if (ui->tableBill->rowCount() == 0) {
        QMessageBox::information(this, "Missing", "Products not found to save");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO sales (sale_no, customer_no, sale_date, sale_qty, sale_total) "
                  "VALUES (:sale_no, :customer_no, :sale_date, :sale_qty, :sale_total)");
    query.bindValue(":sale_no", ui->lEBillNo->text().toInt());
    query.bindValue(":customer_no", ui->comboCustomer->itemData(ui->comboCustomer->currentIndex(), Qt::StatusTipRole).toInt());
    query.bindValue(":sale_date", QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm AP"));
    query.bindValue(":sale_qty", ui->tableBill->rowCount());
    query.bindValue(":sale_total", ui->labelTotal->text().toDouble());
    query.exec();
    if (query.lastError().isValid()) {
        QMessageBox::information(this, "Sales insert error", query.lastError().text());
        return;
    }

    for (int row = 0; row < ui->tableBill->rowCount(); ++row) {
        QSqlQuery queryItem;
        queryItem.prepare("INSERT INTO sale_detail (sale_no, product_no, product_qty, product_rate, product_amount) "
                          "VALUES (:sale_no, :product_no, :product_qty, :product_rate, :product_amount)");
        queryItem.bindValue(":sale_no", ui->lEBillNo->text().toInt());
        queryItem.bindValue(":product_no", ui->tableBill->model()->index(row, 0).data(0).toString());
        queryItem.bindValue(":product_qty", ui->tableBill->model()->index(row, 2).data(0).toDouble());
        queryItem.bindValue(":product_rate", ui->tableBill->model()->index(row, 3).data(0).toDouble());
        queryItem.bindValue(":product_amount", ui->tableBill->model()->index(row, 4).data(0).toDouble());
        queryItem.exec();
        if (queryItem.lastError().isValid()) {
            QMessageBox::information(this, "Sales detail insert error", queryItem.lastError().text());
            return;
        }

        QSqlQuery queryStock;
        queryStock.prepare("INSERT INTO stocks (stock_date, product_no, stock_qty, stock_price) "
                           "VALUES (:stock_date, :product_no, :stock_qty, :stock_price)");
        queryStock.bindValue(":stock_date", QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm AP"));
        queryStock.bindValue(":product_no", ui->tableBill->model()->index(row, 0).data(0).toInt());
        queryStock.bindValue(":stock_qty", -ui->tableBill->model()->index(row, 2).data(0).toDouble());
        queryStock.bindValue(":stock_price", 0);
        queryStock.exec();
        if (queryStock.lastError().isValid()) {
            QMessageBox::information(this, "Stock detail insert error", queryStock.lastError().text());
            return;
        }
    }

    queryModel->setQuery(queryModel->query().lastQuery());
    this->on_pBCancel_clicked();

}

void BillEntry::on_pBCancel_clicked()
{
    ui->lEBillNo->clear();
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->comboCustomer->setCurrentIndex(-1);
    ui->lEAddress->clear();
    ui->lEPlace->clear();
    ui->lEMobileNo->clear();

    ui->comboProduct->setCurrentIndex(-1);
    ui->lEQty->clear();
    ui->lERate->clear();
    ui->labelTotal->setText("0.00");
    ui->tableBill->setRowCount(0);

    QSqlQuery query("SELECT coalesce(MAX(sale_no),0)+1 AS sale_no FROM sales");
    query.next();
    ui->lEBillNo->setText(query.value(0).toString());
}

void BillEntry::on_tableList_doubleClicked(const QModelIndex &index)
{
    QSqlQuery query("SELECT * FROM sales WHERE sale_no = "+ui->tableList->model()->index(index.row(), 0).data(0).toString());
    if (query.next()) {
        for (int i = 0; i < ui->comboCustomer->count(); ++i) {
            if (ui->comboCustomer->itemData(i, Qt::StatusTipRole).toInt() == query.value("customer_no").toInt()) {
                ui->comboCustomer->setCurrentIndex(i);
                this->on_comboCustomer_activated(ui->comboCustomer->currentIndex());
            }
        }
        ui->lEBillNo->setText(query.value("sale_no").toString());
        ui->dateTimeEdit->setDateTime(query.value("sale_date").toDateTime());
        ui->labelTotal->setText(QString::number(query.value("sale_total").toDouble(),'f',2));
    } else {
        QMessageBox::information(this, "sale select error", query.lastError().text());
    }

    ui->tableBill->setRowCount(0);
    QSqlQuery queryItem("SELECT SD.*, PRD.product_name FROM sale_detail SD INNER JOIN products PRD ON PRD.product_no = SD.product_no WHERE SD.sale_no = "+ui->tableList->model()->index(index.row(), 0).data(0).toString());
    while (queryItem.next()) {
        int row = ui->tableBill->rowCount();
        ui->tableBill->insertRow(row);
        ui->tableBill->setItem(row, 0, new QTableWidgetItem(queryItem.value("product_no").toString()));
        ui->tableBill->setItem(row, 1, new QTableWidgetItem(queryItem.value("product_name").toString()));
        ui->tableBill->setItem(row, 2, new QTableWidgetItem(queryItem.value("product_qty").toString()));
        ui->tableBill->setItem(row, 3, new QTableWidgetItem(queryItem.value("product_rate").toString()));
        ui->tableBill->setItem(row, 4, new QTableWidgetItem(queryItem.value("product_amount").toString()));
    }
}

void BillEntry::on_pBDelete_clicked()
{
    if (QMessageBox::question(this, "Confirmation?", "Are you sure to remove bill?",
                              QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) == QMessageBox::No)
        return;

    QSqlQuery query("DELETE FROM sales WHERE sale_no = "+ui->tableList->model()->index(ui->tableList->currentIndex().row(), 0).data(0).toString());
    QSqlQuery query1("DELETE FROM sale_detail WHERE sale_no = "+ui->tableList->model()->index(ui->tableList->currentIndex().row(), 0).data(0).toString());
    queryModel->setQuery(queryModel->query().lastQuery());
    this->on_pBCancel_clicked();
}
