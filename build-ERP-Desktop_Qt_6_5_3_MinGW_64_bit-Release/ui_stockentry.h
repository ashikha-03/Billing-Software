/********************************************************************************
** Form generated from reading UI file 'stockentry.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCKENTRY_H
#define UI_STOCKENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_StockEntry
{
public:
    QPushButton *pBCancel;
    QLabel *lblMobileNo;
    QTableView *tableList;
    QLabel *lblCustomer;
    QLabel *lblAddress;
    QLabel *lblPlace;
    QPushButton *pBSave;
    QLineEdit *lEQty;
    QLineEdit *lEValue;
    QLineEdit *lECode;
    QComboBox *comboProduct;

    void setupUi(QDialog *StockEntry)
    {
        if (StockEntry->objectName().isEmpty())
            StockEntry->setObjectName("StockEntry");
        StockEntry->setWindowModality(Qt::ApplicationModal);
        StockEntry->resize(1136, 388);
        pBCancel = new QPushButton(StockEntry);
        pBCancel->setObjectName("pBCancel");
        pBCancel->setGeometry(QRect(378, 310, 75, 30));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pBCancel->sizePolicy().hasHeightForWidth());
        pBCancel->setSizePolicy(sizePolicy);
        pBCancel->setMinimumSize(QSize(0, 30));
        pBCancel->setAutoDefault(false);
        lblMobileNo = new QLabel(StockEntry);
        lblMobileNo->setObjectName("lblMobileNo");
        lblMobileNo->setGeometry(QRect(38, 171, 86, 16));
        lblMobileNo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tableList = new QTableView(StockEntry);
        tableList->setObjectName("tableList");
        tableList->setGeometry(QRect(518, 21, 601, 341));
        tableList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableList->horizontalHeader()->setStretchLastSection(true);
        lblCustomer = new QLabel(StockEntry);
        lblCustomer->setObjectName("lblCustomer");
        lblCustomer->setGeometry(QRect(38, 50, 86, 16));
        lblCustomer->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblAddress = new QLabel(StockEntry);
        lblAddress->setObjectName("lblAddress");
        lblAddress->setGeometry(QRect(38, 91, 86, 16));
        lblAddress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblPlace = new QLabel(StockEntry);
        lblPlace->setObjectName("lblPlace");
        lblPlace->setGeometry(QRect(38, 131, 86, 16));
        lblPlace->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pBSave = new QPushButton(StockEntry);
        pBSave->setObjectName("pBSave");
        pBSave->setGeometry(QRect(288, 310, 75, 30));
        sizePolicy.setHeightForWidth(pBSave->sizePolicy().hasHeightForWidth());
        pBSave->setSizePolicy(sizePolicy);
        pBSave->setMinimumSize(QSize(0, 30));
        pBSave->setAutoDefault(false);
        lEQty = new QLineEdit(StockEntry);
        lEQty->setObjectName("lEQty");
        lEQty->setGeometry(QRect(130, 131, 130, 20));
        lEValue = new QLineEdit(StockEntry);
        lEValue->setObjectName("lEValue");
        lEValue->setGeometry(QRect(130, 171, 130, 20));
        lECode = new QLineEdit(StockEntry);
        lECode->setObjectName("lECode");
        lECode->setGeometry(QRect(130, 90, 131, 20));
        comboProduct = new QComboBox(StockEntry);
        comboProduct->setObjectName("comboProduct");
        comboProduct->setGeometry(QRect(130, 50, 301, 22));
        QWidget::setTabOrder(lECode, lEQty);
        QWidget::setTabOrder(lEQty, lEValue);
        QWidget::setTabOrder(lEValue, pBSave);
        QWidget::setTabOrder(pBSave, tableList);
        QWidget::setTabOrder(tableList, pBCancel);

        retranslateUi(StockEntry);

        QMetaObject::connectSlotsByName(StockEntry);
    } // setupUi

    void retranslateUi(QDialog *StockEntry)
    {
        StockEntry->setWindowTitle(QCoreApplication::translate("StockEntry", "Stock Management", nullptr));
        pBCancel->setText(QCoreApplication::translate("StockEntry", "Clear", nullptr));
        lblMobileNo->setText(QCoreApplication::translate("StockEntry", "Stock Value : ", nullptr));
        lblCustomer->setText(QCoreApplication::translate("StockEntry", "Product Name : ", nullptr));
        lblAddress->setText(QCoreApplication::translate("StockEntry", "Product Code : ", nullptr));
        lblPlace->setText(QCoreApplication::translate("StockEntry", "Stock Qty : ", nullptr));
        pBSave->setText(QCoreApplication::translate("StockEntry", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StockEntry: public Ui_StockEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCKENTRY_H
