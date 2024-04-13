#ifndef BILLENTRY_H
#define BILLENTRY_H

#include <QDialog>

#include <QSqlQueryModel>

namespace Ui {
class BillEntry;
}

class BillEntry : public QDialog
{
    Q_OBJECT

public:
    explicit BillEntry(QWidget *parent = nullptr);
    ~BillEntry();

private slots:
    void on_comboCustomer_activated(int index);

    void on_comboProduct_activated(int index);

    void on_pBtnAdd_clicked();

    void on_pBSave_clicked();

    void on_pBtnDelLine_clicked();

    void on_pBCancel_clicked();

    void on_tableList_doubleClicked(const QModelIndex &index);

    void on_pBDelete_clicked();

private:
    Ui::BillEntry *ui;

    QSqlQueryModel *queryModel;
};

#endif // BILLENTRY_H
