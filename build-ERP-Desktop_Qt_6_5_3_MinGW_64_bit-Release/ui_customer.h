/********************************************************************************
** Form generated from reading UI file 'customer.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_H
#define UI_CUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Customer
{
public:
    QPushButton *pBSave;
    QPushButton *pBCancel;
    QLineEdit *lECustomerName;
    QLabel *lblAddress;
    QLineEdit *lEAddress;
    QLabel *lblCustomer;
    QLineEdit *lEPlace;
    QLabel *lblPlace;
    QLabel *lblMobileNo;
    QLineEdit *lEMobileNo;
    QCheckBox *chkStatus;
    QTableView *tableList;
    QLineEdit *lECustomerNo;

    void setupUi(QDialog *Customer)
    {
        if (Customer->objectName().isEmpty())
            Customer->setObjectName("Customer");
        Customer->resize(1180, 381);
        pBSave = new QPushButton(Customer);
        pBSave->setObjectName("pBSave");
        pBSave->setGeometry(QRect(330, 310, 75, 30));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pBSave->sizePolicy().hasHeightForWidth());
        pBSave->setSizePolicy(sizePolicy);
        pBSave->setMinimumSize(QSize(0, 30));
        pBSave->setAutoDefault(false);
        pBCancel = new QPushButton(Customer);
        pBCancel->setObjectName("pBCancel");
        pBCancel->setGeometry(QRect(420, 310, 75, 30));
        sizePolicy.setHeightForWidth(pBCancel->sizePolicy().hasHeightForWidth());
        pBCancel->setSizePolicy(sizePolicy);
        pBCancel->setMinimumSize(QSize(0, 30));
        pBCancel->setAutoDefault(false);
        lECustomerName = new QLineEdit(Customer);
        lECustomerName->setObjectName("lECustomerName");
        lECustomerName->setGeometry(QRect(172, 50, 321, 20));
        lblAddress = new QLabel(Customer);
        lblAddress->setObjectName("lblAddress");
        lblAddress->setGeometry(QRect(80, 91, 86, 16));
        lblAddress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lEAddress = new QLineEdit(Customer);
        lEAddress->setObjectName("lEAddress");
        lEAddress->setGeometry(QRect(172, 91, 321, 20));
        lblCustomer = new QLabel(Customer);
        lblCustomer->setObjectName("lblCustomer");
        lblCustomer->setGeometry(QRect(45, 50, 121, 20));
        lblCustomer->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lEPlace = new QLineEdit(Customer);
        lEPlace->setObjectName("lEPlace");
        lEPlace->setGeometry(QRect(172, 131, 321, 20));
        lblPlace = new QLabel(Customer);
        lblPlace->setObjectName("lblPlace");
        lblPlace->setGeometry(QRect(80, 131, 86, 16));
        lblPlace->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblMobileNo = new QLabel(Customer);
        lblMobileNo->setObjectName("lblMobileNo");
        lblMobileNo->setGeometry(QRect(80, 171, 86, 16));
        lblMobileNo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lEMobileNo = new QLineEdit(Customer);
        lEMobileNo->setObjectName("lEMobileNo");
        lEMobileNo->setGeometry(QRect(172, 171, 321, 20));
        chkStatus = new QCheckBox(Customer);
        chkStatus->setObjectName("chkStatus");
        chkStatus->setGeometry(QRect(172, 221, 91, 17));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chkStatus->sizePolicy().hasHeightForWidth());
        chkStatus->setSizePolicy(sizePolicy1);
        chkStatus->setChecked(true);
        tableList = new QTableView(Customer);
        tableList->setObjectName("tableList");
        tableList->setGeometry(QRect(560, 21, 601, 341));
        tableList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableList->horizontalHeader()->setStretchLastSection(true);
        lECustomerNo = new QLineEdit(Customer);
        lECustomerNo->setObjectName("lECustomerNo");
        lECustomerNo->setGeometry(QRect(90, 270, 151, 20));

        retranslateUi(Customer);

        QMetaObject::connectSlotsByName(Customer);
    } // setupUi

    void retranslateUi(QDialog *Customer)
    {
        Customer->setWindowTitle(QCoreApplication::translate("Customer", "Customer", nullptr));
        pBSave->setText(QCoreApplication::translate("Customer", "Save", nullptr));
        pBCancel->setText(QCoreApplication::translate("Customer", "Clear", nullptr));
        lblAddress->setText(QCoreApplication::translate("Customer", "Address : ", nullptr));
        lblCustomer->setText(QCoreApplication::translate("Customer", "Customer Name : ", nullptr));
        lblPlace->setText(QCoreApplication::translate("Customer", "Place : ", nullptr));
        lblMobileNo->setText(QCoreApplication::translate("Customer", "Mobile No : ", nullptr));
        chkStatus->setText(QCoreApplication::translate("Customer", "Is Active", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Customer: public Ui_Customer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_H
