#include "customer.h"
#include "ui_customer.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>

#include <QSqlQueryModel>

Customer::Customer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Customer)
{
    ui->setupUi(this);
    ui->lECustomerNo->hide();

    queryModel = new QSqlQueryModel(this);
    queryModel->setQuery("SELECT customer_no, customer_name, customer_address, customer_place, customer_mobileno FROM customers ORDER BY customer_name");


    queryModel->setHeaderData(0, Qt::Horizontal, "#");
    queryModel->setHeaderData(1, Qt::Horizontal, "Name");
    queryModel->setHeaderData(2, Qt::Horizontal, "Address");
    queryModel->setHeaderData(3, Qt::Horizontal, "Place");
    queryModel->setHeaderData(4, Qt::Horizontal, "MobileNo");
    ui->tableList->setModel(queryModel);

    ui->tableList->setColumnWidth(0, 50);
    ui->tableList->setColumnWidth(1, 180);
    ui->tableList->setColumnWidth(2, 100);
    ui->tableList->setColumnWidth(3, 100);
}

Customer::~Customer()
{
    delete ui;
}

void Customer::on_pBSave_clicked()
{
    if (ui->lECustomerName->text().simplified().isEmpty()) {
        QMessageBox::information(this, "Missing", "Customer name is empty");
        return;
    }

    if (ui->lEMobileNo->text().simplified().isEmpty()) {
        QMessageBox::information(this, "Missing", "Mobileno is empty");
        return;
    }

    QSqlQuery query;
    if (ui->lECustomerNo->text().toInt() == 0) {
        query.prepare("INSERT INTO customers (customer_name, customer_address, customer_place, customer_mobileno, active_status) "
                      "VALUES (:customer_name, :customer_address, :customer_place, :customer_mobileno, :active_status)");
    } else {
        query.prepare("UPDATE customers SET customer_name=:customer_name, customer_address=:customer_address, customer_place=:customer_place, customer_mobileno=:customer_mobileno, active_status=:active_status WHERE customer_no = "+ui->lECustomerNo->text());
    }
    query.bindValue(":customer_name", ui->lECustomerName->text().simplified());
    query.bindValue(":customer_address", ui->lEAddress->text());
    query.bindValue(":customer_place", ui->lEPlace->text());
    query.bindValue(":customer_mobileno", ui->lEMobileNo->text().simplified());
    query.bindValue(":active_status", ui->chkStatus->isChecked() ? true : false);
    query.exec();

    if (query.lastError().isValid()) {
        QMessageBox::information(this, "Customer insert error", query.lastError().text());
    } else {
        queryModel->setQuery(queryModel->query().lastQuery());
        on_pBCancel_clicked();
    }
}

void Customer::on_pBCancel_clicked()
{
    ui->lECustomerNo->clear();
    ui->lECustomerName->clear();
    ui->lEAddress->clear();
    ui->lEPlace->clear();
    ui->lEMobileNo->clear();
    ui->chkStatus->setChecked(true);
    ui->lECustomerName->setFocus();
}

void Customer::on_tableList_doubleClicked(const QModelIndex &index)
{
    QSqlQuery query("SELECT * FROM customers WHERE customer_no = "+ui->tableList->model()->index(index.row(), 0).data(0).toString());
    if (query.next()) {
        ui->lECustomerNo->setText(query.value("customer_no").toString());
        ui->lECustomerName->setText(query.value("customer_name").toString());
        ui->lEAddress->setText(query.value("customer_address").toString());
        ui->lEPlace->setText(query.value("customer_place").toString());
        ui->lEMobileNo->setText(query.value("customer_mobileno").toString());
        ui->chkStatus->setChecked(query.value("active_status").toBool());
        ui->lECustomerName->setFocus();
    }
    else {
        QMessageBox::information(this, "Customer select error", query.lastError().text());
    }
}
