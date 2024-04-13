#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>

#include <customer.h>
#include <products.h>
#include <stockentry.h>
#include <billentry.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->centralWidget()->setLayout(ui->gridLayout);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/ashik/OneDrive/Documents/Consultancy-project/C.PRJ/ERP.sqlite");
    if (!db.open()) {
        QMessageBox::information(this, "DB Error", db.lastError().text());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *ev)
{
    QImage image(":/logo.jpeg");
    QPixmap pixmap = QPixmap::fromImage(image);
    ui->label->setPixmap(pixmap.scaled(ui->label->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    //    ui->centralwidget->setba
    //    ui->mdiArea->setBackground(pixmap.scaled(ui->mdiArea->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    QMainWindow::resizeEvent(ev);
}


void MainWindow::on_actionCustomers_triggered()
{
    Customer *cust = new Customer(this);
    cust->show();
}

void MainWindow::on_actionProducts_triggered()
{
    Products *product = new Products(this);
    product->show();
}

void MainWindow::on_actionStock_Management_triggered()
{
    StockEntry *stock = new StockEntry(this);
    stock->show();
}

void MainWindow::on_actionBilling_triggered()
{
    BillEntry *bill = new BillEntry(this);
    bill->show();
}
