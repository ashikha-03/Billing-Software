/********************************************************************************
** Form generated from reading UI file 'billentry.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLENTRY_H
#define UI_BILLENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_BillEntry
{
public:
    QLabel *lblAddress;
    QLineEdit *lEBillNo;
    QLabel *lblAddress_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *lblAddress_3;
    QComboBox *comboCustomer;
    QLineEdit *lEAddress;
    QLineEdit *lEPlace;
    QLineEdit *lEMobileNo;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lblAddress_6;
    QLabel *lblAddress_5;
    QLineEdit *lERate;
    QLineEdit *lEQty;
    QComboBox *comboProduct;
    QLabel *lblAddress_4;
    QPushButton *pBtnAdd;
    QPushButton *pBtnDelLine;
    QTableWidget *tableBill;
    QPushButton *pBSave;
    QPushButton *pBCancel;
    QPushButton *pBDelete;
    QTableView *tableList;
    QLabel *labelTotal;
    QLabel *lblAddress_7;
    QLabel *lblAddress_8;
    QLabel *lblAddress_9;

    void setupUi(QDialog *BillEntry)
    {
        if (BillEntry->objectName().isEmpty())
            BillEntry->setObjectName("BillEntry");
        BillEntry->setWindowModality(Qt::ApplicationModal);
        BillEntry->resize(1344, 540);
        lblAddress = new QLabel(BillEntry);
        lblAddress->setObjectName("lblAddress");
        lblAddress->setGeometry(QRect(450, 30, 86, 16));
        lblAddress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lEBillNo = new QLineEdit(BillEntry);
        lEBillNo->setObjectName("lEBillNo");
        lEBillNo->setEnabled(false);
        lEBillNo->setGeometry(QRect(550, 30, 113, 20));
        lblAddress_2 = new QLabel(BillEntry);
        lblAddress_2->setObjectName("lblAddress_2");
        lblAddress_2->setGeometry(QRect(450, 60, 86, 16));
        lblAddress_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dateTimeEdit = new QDateTimeEdit(BillEntry);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(550, 60, 131, 22));
        dateTimeEdit->setCalendarPopup(true);
        lblAddress_3 = new QLabel(BillEntry);
        lblAddress_3->setObjectName("lblAddress_3");
        lblAddress_3->setGeometry(QRect(0, 20, 91, 16));
        lblAddress_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboCustomer = new QComboBox(BillEntry);
        comboCustomer->setObjectName("comboCustomer");
        comboCustomer->setGeometry(QRect(110, 20, 301, 22));
        lEAddress = new QLineEdit(BillEntry);
        lEAddress->setObjectName("lEAddress");
        lEAddress->setEnabled(true);
        lEAddress->setGeometry(QRect(110, 50, 301, 20));
        lEAddress->setReadOnly(true);
        lEPlace = new QLineEdit(BillEntry);
        lEPlace->setObjectName("lEPlace");
        lEPlace->setEnabled(true);
        lEPlace->setGeometry(QRect(110, 80, 301, 20));
        lEPlace->setReadOnly(true);
        lEMobileNo = new QLineEdit(BillEntry);
        lEMobileNo->setObjectName("lEMobileNo");
        lEMobileNo->setEnabled(true);
        lEMobileNo->setGeometry(QRect(110, 110, 301, 20));
        lEMobileNo->setReadOnly(true);
        frame = new QFrame(BillEntry);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 170, 640, 40));
        frame->setStyleSheet(QString::fromUtf8("#frame{background-color: rgb(255, 255, 127);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        lblAddress_6 = new QLabel(frame);
        lblAddress_6->setObjectName("lblAddress_6");
        lblAddress_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lblAddress_6, 0, 4, 1, 1);

        lblAddress_5 = new QLabel(frame);
        lblAddress_5->setObjectName("lblAddress_5");
        lblAddress_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lblAddress_5, 0, 2, 1, 1);

        lERate = new QLineEdit(frame);
        lERate->setObjectName("lERate");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lERate->sizePolicy().hasHeightForWidth());
        lERate->setSizePolicy(sizePolicy);
        lERate->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(lERate, 0, 5, 1, 1);

        lEQty = new QLineEdit(frame);
        lEQty->setObjectName("lEQty");
        lEQty->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(lEQty, 0, 3, 1, 1);

        comboProduct = new QComboBox(frame);
        comboProduct->setObjectName("comboProduct");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboProduct->sizePolicy().hasHeightForWidth());
        comboProduct->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboProduct, 0, 1, 1, 1);

        lblAddress_4 = new QLabel(frame);
        lblAddress_4->setObjectName("lblAddress_4");
        lblAddress_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lblAddress_4, 0, 0, 1, 1);

        pBtnAdd = new QPushButton(frame);
        pBtnAdd->setObjectName("pBtnAdd");

        gridLayout->addWidget(pBtnAdd, 0, 6, 1, 1);

        pBtnDelLine = new QPushButton(frame);
        pBtnDelLine->setObjectName("pBtnDelLine");

        gridLayout->addWidget(pBtnDelLine, 0, 7, 1, 1);

        tableBill = new QTableWidget(BillEntry);
        if (tableBill->columnCount() < 5)
            tableBill->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableBill->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableBill->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableBill->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableBill->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableBill->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableBill->setObjectName("tableBill");
        tableBill->setGeometry(QRect(30, 210, 641, 261));
        tableBill->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableBill->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBill->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableBill->horizontalHeader()->setStretchLastSection(true);
        pBSave = new QPushButton(BillEntry);
        pBSave->setObjectName("pBSave");
        pBSave->setGeometry(QRect(374, 490, 101, 30));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pBSave->sizePolicy().hasHeightForWidth());
        pBSave->setSizePolicy(sizePolicy2);
        pBSave->setMinimumSize(QSize(0, 30));
        pBSave->setAutoDefault(false);
        pBCancel = new QPushButton(BillEntry);
        pBCancel->setObjectName("pBCancel");
        pBCancel->setGeometry(QRect(490, 490, 75, 30));
        sizePolicy2.setHeightForWidth(pBCancel->sizePolicy().hasHeightForWidth());
        pBCancel->setSizePolicy(sizePolicy2);
        pBCancel->setMinimumSize(QSize(0, 30));
        pBCancel->setAutoDefault(false);
        pBDelete = new QPushButton(BillEntry);
        pBDelete->setObjectName("pBDelete");
        pBDelete->setGeometry(QRect(580, 490, 75, 30));
        sizePolicy2.setHeightForWidth(pBDelete->sizePolicy().hasHeightForWidth());
        pBDelete->setSizePolicy(sizePolicy2);
        pBDelete->setMinimumSize(QSize(0, 30));
        pBDelete->setAutoDefault(false);
        tableList = new QTableView(BillEntry);
        tableList->setObjectName("tableList");
        tableList->setGeometry(QRect(720, 30, 601, 440));
        tableList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableList->horizontalHeader()->setStretchLastSection(true);
        labelTotal = new QLabel(BillEntry);
        labelTotal->setObjectName("labelTotal");
        labelTotal->setGeometry(QRect(40, 485, 171, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        labelTotal->setFont(font);
        labelTotal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblAddress_7 = new QLabel(BillEntry);
        lblAddress_7->setObjectName("lblAddress_7");
        lblAddress_7->setGeometry(QRect(20, 50, 71, 20));
        lblAddress_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblAddress_8 = new QLabel(BillEntry);
        lblAddress_8->setObjectName("lblAddress_8");
        lblAddress_8->setGeometry(QRect(0, 80, 91, 16));
        lblAddress_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblAddress_9 = new QLabel(BillEntry);
        lblAddress_9->setObjectName("lblAddress_9");
        lblAddress_9->setGeometry(QRect(10, 110, 91, 16));
        lblAddress_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(BillEntry);

        QMetaObject::connectSlotsByName(BillEntry);
    } // setupUi

    void retranslateUi(QDialog *BillEntry)
    {
        BillEntry->setWindowTitle(QCoreApplication::translate("BillEntry", "Billing", nullptr));
        lblAddress->setText(QCoreApplication::translate("BillEntry", "Bill No : ", nullptr));
        lblAddress_2->setText(QCoreApplication::translate("BillEntry", "Bill Date : ", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("BillEntry", "MM/dd/yyyy HH:mm", nullptr));
        lblAddress_3->setText(QCoreApplication::translate("BillEntry", "        Customer :", nullptr));
        lblAddress_6->setText(QCoreApplication::translate("BillEntry", "Rate : ", nullptr));
        lblAddress_5->setText(QCoreApplication::translate("BillEntry", "Qty : ", nullptr));
        lblAddress_4->setText(QCoreApplication::translate("BillEntry", "Product : ", nullptr));
        pBtnAdd->setText(QCoreApplication::translate("BillEntry", "Add", nullptr));
        pBtnDelLine->setText(QCoreApplication::translate("BillEntry", "Delete", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableBill->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BillEntry", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableBill->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BillEntry", "Product Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableBill->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BillEntry", "Qty", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableBill->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("BillEntry", "Rate", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableBill->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("BillEntry", "Amount", nullptr));
        pBSave->setText(QCoreApplication::translate("BillEntry", "Save && Print", nullptr));
        pBCancel->setText(QCoreApplication::translate("BillEntry", "Clear", nullptr));
        pBDelete->setText(QCoreApplication::translate("BillEntry", "Delete", nullptr));
        labelTotal->setText(QCoreApplication::translate("BillEntry", "0.00", nullptr));
        lblAddress_7->setText(QCoreApplication::translate("BillEntry", "Address :", nullptr));
        lblAddress_8->setText(QCoreApplication::translate("BillEntry", "Place :", nullptr));
        lblAddress_9->setText(QCoreApplication::translate("BillEntry", " Mobile no :  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BillEntry: public Ui_BillEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLENTRY_H
