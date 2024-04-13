#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionCustomers_triggered();

    void on_actionProducts_triggered();

    void on_actionStock_Management_triggered();

    void on_actionBilling_triggered();

    void resizeEvent(QResizeEvent *ev);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
