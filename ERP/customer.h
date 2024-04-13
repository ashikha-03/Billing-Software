#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QDialog>

#include <QSqlQueryModel>

namespace Ui {
class Customer;
}

class Customer : public QDialog
{
    Q_OBJECT

public:
    explicit Customer(QWidget *parent = nullptr);
    ~Customer();

private slots:
    void on_pBSave_clicked();

    void on_pBCancel_clicked();

    void on_tableList_doubleClicked(const QModelIndex &index);

private:
    Ui::Customer *ui;

    QSqlQueryModel *queryModel;
};

#endif // CUSTOMER_H
