#ifndef STOCKENTRY_H
#define STOCKENTRY_H

#include <QDialog>

#include <QSqlQueryModel>

namespace Ui {
class StockEntry;
}

class StockEntry : public QDialog
{
    Q_OBJECT

public:
    explicit StockEntry(QWidget *parent = nullptr);
    ~StockEntry();

private slots:
    void on_pBSave_clicked();

    void on_pBCancel_clicked();

private:
    Ui::StockEntry *ui;

    QSqlQueryModel *queryModel;
};

#endif // STOCKENTRY_H
