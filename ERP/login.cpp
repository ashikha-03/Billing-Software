#include "login.h"
#include "ui_login.h"

#include <mainwindow.h>
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pBLogin_clicked()
{
    if (ui->lEUserName->text().simplified() != "ADMIN" && ui->lEPassword->text().simplified() != "ADMIN") {
        QMessageBox::information(this, "Wrong credentials", "Check user name & password");
        return;
    }

    this->close();
    MainWindow *window = new MainWindow();
    window->showMaximized();
}

void Login::on_pBCancel_clicked()
{
    this->close();
}
