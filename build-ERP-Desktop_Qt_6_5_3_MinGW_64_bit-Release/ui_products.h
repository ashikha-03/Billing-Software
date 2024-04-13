/********************************************************************************
** Form generated from reading UI file 'products.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTS_H
#define UI_PRODUCTS_H

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

class Ui_Products
{
public:
    QPushButton *pBCancel;
    QLabel *lblMobileNo;
    QLineEdit *lECode;
    QTableView *tableList;
    QLabel *lblCustomer;
    QLineEdit *lEProductNo;
    QLabel *lblAddress;
    QLabel *lblPlace;
    QCheckBox *chkStatus;
    QPushButton *pBSave;
    QLineEdit *lEUOM;
    QLineEdit *lEPrice;
    QLineEdit *lEName;
    QLabel *lblMobileNo_2;
    QLineEdit *lEMRP;

    void setupUi(QDialog *Products)
    {
        if (Products->objectName().isEmpty())
            Products->setObjectName("Products");
        Products->resize(1180, 381);
        pBCancel = new QPushButton(Products);
        pBCancel->setObjectName("pBCancel");
        pBCancel->setGeometry(QRect(378, 310, 75, 30));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pBCancel->sizePolicy().hasHeightForWidth());
        pBCancel->setSizePolicy(sizePolicy);
        pBCancel->setMinimumSize(QSize(0, 30));
        pBCancel->setAutoDefault(false);
        lblMobileNo = new QLabel(Products);
        lblMobileNo->setObjectName("lblMobileNo");
        lblMobileNo->setGeometry(QRect(38, 171, 86, 16));
        lblMobileNo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lECode = new QLineEdit(Products);
        lECode->setObjectName("lECode");
        lECode->setGeometry(QRect(130, 91, 140, 20));
        tableList = new QTableView(Products);
        tableList->setObjectName("tableList");
        tableList->setGeometry(QRect(518, 21, 601, 341));
        tableList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableList->horizontalHeader()->setStretchLastSection(true);
        lblCustomer = new QLabel(Products);
        lblCustomer->setObjectName("lblCustomer");
        lblCustomer->setGeometry(QRect(13, 50, 111, 20));
        lblCustomer->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lEProductNo = new QLineEdit(Products);
        lEProductNo->setObjectName("lEProductNo");
        lEProductNo->setGeometry(QRect(40, 300, 151, 20));
        lblAddress = new QLabel(Products);
        lblAddress->setObjectName("lblAddress");
        lblAddress->setGeometry(QRect(38, 91, 86, 16));
        lblAddress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblPlace = new QLabel(Products);
        lblPlace->setObjectName("lblPlace");
        lblPlace->setGeometry(QRect(3, 131, 121, 20));
        lblPlace->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        chkStatus = new QCheckBox(Products);
        chkStatus->setObjectName("chkStatus");
        chkStatus->setGeometry(QRect(130, 250, 91, 17));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chkStatus->sizePolicy().hasHeightForWidth());
        chkStatus->setSizePolicy(sizePolicy1);
        chkStatus->setChecked(true);
        pBSave = new QPushButton(Products);
        pBSave->setObjectName("pBSave");
        pBSave->setGeometry(QRect(288, 310, 75, 30));
        sizePolicy.setHeightForWidth(pBSave->sizePolicy().hasHeightForWidth());
        pBSave->setSizePolicy(sizePolicy);
        pBSave->setMinimumSize(QSize(0, 30));
        pBSave->setAutoDefault(false);
        lEUOM = new QLineEdit(Products);
        lEUOM->setObjectName("lEUOM");
        lEUOM->setGeometry(QRect(130, 131, 140, 20));
        lEPrice = new QLineEdit(Products);
        lEPrice->setObjectName("lEPrice");
        lEPrice->setGeometry(QRect(130, 171, 141, 20));
        sizePolicy1.setHeightForWidth(lEPrice->sizePolicy().hasHeightForWidth());
        lEPrice->setSizePolicy(sizePolicy1);
        lEName = new QLineEdit(Products);
        lEName->setObjectName("lEName");
        lEName->setGeometry(QRect(130, 50, 321, 20));
        lblMobileNo_2 = new QLabel(Products);
        lblMobileNo_2->setObjectName("lblMobileNo_2");
        lblMobileNo_2->setGeometry(QRect(38, 210, 86, 16));
        lblMobileNo_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lEMRP = new QLineEdit(Products);
        lEMRP->setObjectName("lEMRP");
        lEMRP->setGeometry(QRect(130, 210, 141, 20));
        sizePolicy1.setHeightForWidth(lEMRP->sizePolicy().hasHeightForWidth());
        lEMRP->setSizePolicy(sizePolicy1);
        QWidget::setTabOrder(lEName, lECode);
        QWidget::setTabOrder(lECode, lEUOM);
        QWidget::setTabOrder(lEUOM, lEPrice);
        QWidget::setTabOrder(lEPrice, lEMRP);
        QWidget::setTabOrder(lEMRP, chkStatus);
        QWidget::setTabOrder(chkStatus, tableList);
        QWidget::setTabOrder(tableList, lEProductNo);
        QWidget::setTabOrder(lEProductNo, pBCancel);
        QWidget::setTabOrder(pBCancel, pBSave);

        retranslateUi(Products);

        QMetaObject::connectSlotsByName(Products);
    } // setupUi

    void retranslateUi(QDialog *Products)
    {
        Products->setWindowTitle(QCoreApplication::translate("Products", "Dialog", nullptr));
        pBCancel->setText(QCoreApplication::translate("Products", "Clear", nullptr));
        lblMobileNo->setText(QCoreApplication::translate("Products", "Sales Price : ", nullptr));
        lblCustomer->setText(QCoreApplication::translate("Products", "Product Name : ", nullptr));
        lblAddress->setText(QCoreApplication::translate("Products", "Code : ", nullptr));
        lblPlace->setText(QCoreApplication::translate("Products", "Unit of Measure : ", nullptr));
        chkStatus->setText(QCoreApplication::translate("Products", "Is Active", nullptr));
        pBSave->setText(QCoreApplication::translate("Products", "Save", nullptr));
        lEUOM->setText(QCoreApplication::translate("Products", "Pcs", nullptr));
        lblMobileNo_2->setText(QCoreApplication::translate("Products", "M.R.P : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Products: public Ui_Products {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTS_H
