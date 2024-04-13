#ifndef PRODUCTS_H
#define PRODUCTS_H

#include <QDialog>

#include <QSqlQueryModel>

namespace Ui {
class Products;
}

class Products : public QDialog
{
    Q_OBJECT

public:
    explicit Products(QWidget *parent = nullptr);
    ~Products();

private slots:
    void on_pBSave_clicked();

    void on_pBCancel_clicked();

    void on_tableList_doubleClicked(const QModelIndex &index);

private:
    Ui::Products *ui;

    QSqlQueryModel *queryModel;
};

#endif // PRODUCTS_H
