#include "stockentry.h"
#include "ui_stockentry.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QDateTime>

StockEntry::StockEntry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StockEntry)
{
    ui->setupUi(this);

    QSqlQuery query("SELECT product_no, product_name FROM products WHERE active_status = 1");
    while (query.next()) {
        int idx = ui->comboProduct->count();
        ui->comboProduct->insertItem(idx, "");
        ui->comboProduct->setItemData(idx, query.value("product_name").toString(), Qt::DisplayRole);
        ui->comboProduct->setItemData(idx, query.value("product_no").toString(), Qt::StatusTipRole);
    }

    queryModel = new QSqlQueryModel(this);
    queryModel->setQuery("SELECT PD.product_no, PD.product_name, SUM(STK.stock_qty), PD.product_uom, SUM(STK.stock_qty * PD.sales_price) AS stock_value FROM stocks STK INNER JOIN products PD ON PD.product_no = STK.product_no GROUP BY PD.product_no, PD.product_name");


    queryModel->setHeaderData(0, Qt::Horizontal, "#");
    queryModel->setHeaderData(1, Qt::Horizontal, "Name");
    queryModel->setHeaderData(2, Qt::Horizontal, "Stock");
    queryModel->setHeaderData(3, Qt::Horizontal, "UOM");
    queryModel->setHeaderData(4, Qt::Horizontal, "Stock Value");
    ui->tableList->setModel(queryModel);

    ui->tableList->setColumnWidth(0, 50);
    ui->tableList->setColumnWidth(1, 200);
    ui->tableList->setColumnWidth(2, 80);
    ui->tableList->setColumnWidth(3, 80);
    ui->tableList->setColumnWidth(4, 120);
}

StockEntry::~StockEntry()
{
    delete ui;
}

void StockEntry::on_pBSave_clicked()
{
    if (ui->lEQty->text().toDouble() == 0) {
        QMessageBox::information(this, "Missing", "Qty is empty");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO stocks (stock_date, product_no, stock_qty, stock_price) "
                  "VALUES (:stock_date, :product_no, :stock_qty, :stock_price)");
    query.bindValue(":stock_date", QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm AP"));
    query.bindValue(":product_no", ui->comboProduct->itemData(ui->comboProduct->currentIndex(), Qt::StatusTipRole).toInt());
    query.bindValue(":stock_qty", ui->lEQty->text().toDouble());
    query.bindValue(":stock_price", ui->lEValue->text().toDouble());
    query.exec();

    if (!query.lastError().isValid()) {
        QMessageBox::information(this, "Stock", "Stock Added");
        queryModel->setQuery(queryModel->query().lastQuery());
        this->on_pBCancel_clicked();
    } else {
        QMessageBox::information(this, "Stock insert error", query.lastError().text());
    }
}

void StockEntry::on_pBCancel_clicked()
{
    ui->lECode->clear();
    ui->comboProduct->setCurrentIndex(0);
    ui->lEQty->clear();
    ui->lEValue->clear();
    ui->lECode->setFocus();
}
