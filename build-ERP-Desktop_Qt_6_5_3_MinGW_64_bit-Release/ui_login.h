/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *pushButton;
    QLineEdit *lEUserName;
    QPushButton *pushButton_2;
    QLineEdit *lEPassword;
    QPushButton *pBCancel;
    QPushButton *pBLogin;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(400, 300);
        pushButton = new QPushButton(Login);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(14, 80, 111, 20));
        pushButton->setStyleSheet(QString::fromUtf8("text-align:right;\n"
"border:0px solid white;"));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);
        lEUserName = new QLineEdit(Login);
        lEUserName->setObjectName("lEUserName");
        lEUserName->setGeometry(QRect(140, 80, 201, 20));
        pushButton_2 = new QPushButton(Login);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 130, 76, 16));
        pushButton_2->setStyleSheet(QString::fromUtf8("text-align:right;\n"
"border:0px solid white;"));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(true);
        lEPassword = new QLineEdit(Login);
        lEPassword->setObjectName("lEPassword");
        lEPassword->setGeometry(QRect(140, 130, 201, 20));
        lEPassword->setEchoMode(QLineEdit::Password);
        pBCancel = new QPushButton(Login);
        pBCancel->setObjectName("pBCancel");
        pBCancel->setGeometry(QRect(250, 200, 75, 30));
        pBCancel->setMinimumSize(QSize(0, 30));
        pBCancel->setAutoDefault(false);
        pBLogin = new QPushButton(Login);
        pBLogin->setObjectName("pBLogin");
        pBLogin->setGeometry(QRect(160, 200, 75, 30));
        pBLogin->setMinimumSize(QSize(0, 30));
        pBLogin->setAutoDefault(false);
        QWidget::setTabOrder(lEUserName, lEPassword);
        QWidget::setTabOrder(lEPassword, pBLogin);
        QWidget::setTabOrder(pBLogin, pBCancel);
        QWidget::setTabOrder(pBCancel, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "Login Name : ", nullptr));
        lEUserName->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Login", "Password : ", nullptr));
        lEPassword->setText(QString());
        pBCancel->setText(QCoreApplication::translate("Login", "Cancel", nullptr));
        pBLogin->setText(QCoreApplication::translate("Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
