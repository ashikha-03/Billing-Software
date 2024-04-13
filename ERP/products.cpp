#include "products.h"
#include "ui_products.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QStringList>

Products::Products(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Products)
{
    ui->setupUi(this);
    ui->lEProductNo->hide();

    queryModel = new QSqlQueryModel(this);
    queryModel->setQuery("SELECT product_no, product_name, product_code, product_uom, sales_price, max_price FROM products ORDER BY product_name ");


    queryModel->setHeaderData(0, Qt::Horizontal, "#");
    queryModel->setHeaderData(1, Qt::Horizontal, "Name");
    queryModel->setHeaderData(2, Qt::Horizontal, "Code");
    queryModel->setHeaderData(3, Qt::Horizontal, "UOM");
    queryModel->setHeaderData(4, Qt::Horizontal, "Price");
    queryModel->setHeaderData(5, Qt::Horizontal, "M.R.P");
    ui->tableList->setModel(queryModel);

    ui->tableList->setColumnWidth(0, 50);
    ui->tableList->setColumnWidth(1, 180);
    ui->tableList->setColumnWidth(2, 100);
    ui->tableList->setColumnWidth(3, 80);
    ui->tableList->setColumnWidth(4, 80);
    ui->tableList->setColumnWidth(5, 80);
}

Products::~Products()
{
    delete ui;
}

// Function to generate product code based on the product name
QString generateProductCode(const QString &productName) {
    QStringList parts = productName.split(" ");
    QString code;

    // Construct code from the first letter of each word and the last part
    for(const QString &part : parts) {
        if(!part.isEmpty()) {
            code += part.left(1).toUpper();
        }
    }

    // Add the last part to the code
    if(!parts.isEmpty()) {
        QString lastPart = parts.last();
        if(lastPart.size() > 1) {
            code += lastPart.left(3).toUpper();
        } else {
            code += lastPart.toUpper();
        }
    }

    return code;
}

void Products::on_pBSave_clicked()
{
    if (ui->lEName->text().simplified().isEmpty()) {
        QMessageBox::information(this, "Missing", "Product name is empty");
        return;
    }

    // Generate product code
    QString productCode = generateProductCode(ui->lEName->text().simplified());

    if (ui->lECode->text().simplified().isEmpty()) {
        ui->lECode->setText(productCode); // Set the generated code
    }

    QSqlQuery query;
    if (ui->lEProductNo->text().toInt() == 0) {
        query.prepare("INSERT INTO products (product_name, product_code, product_uom, sales_price, max_price, active_status) "
                      "VALUES (:product_name, :product_code, :product_uom, :sales_price, :max_price, :active_status)");
    } else {
        query.prepare("UPDATE products SET product_name=:product_name, product_code=:product_code, product_uom=:product_uom, sales_price=:sales_price, max_price=:max_price, active_status=:active_status WHERE product_no = "+ui->lEProductNo->text());
    }
    query.bindValue(":product_name", ui->lEName->text().simplified());
    query.bindValue(":product_code", ui->lECode->text().simplified());
    query.bindValue(":product_uom", ui->lEUOM->text());
    query.bindValue(":sales_price", ui->lEPrice->text().toDouble());
    query.bindValue(":max_price", ui->lEMRP->text().toDouble());
    query.bindValue(":active_status", ui->chkStatus->isChecked() ? true : false);
    query.exec();

    if (query.lastError().isValid()) {
        QMessageBox::information(this, "Product insert error", query.lastError().text());
    } else {
        queryModel->setQuery(queryModel->query().lastQuery());
        on_pBCancel_clicked();
    }
}

void Products::on_pBCancel_clicked()
{
    ui->lEProductNo->clear();
    ui->lEName->clear();
    ui->lECode->clear();
    ui->lEUOM->setText("Pcs");
    ui->lEPrice->clear();
    ui->lEMRP->clear();
    ui->chkStatus->setChecked(true);
    ui->lEName->setFocus();
}

void Products::on_tableList_doubleClicked(const QModelIndex &index)
{
    QSqlQuery query("SELECT * FROM products WHERE product_no = "+ui->tableList->model()->index(index.row(), 0).data(0).toString());
    if (query.next()) {
        ui->lEProductNo->setText(query.value("product_no").toString());
        ui->lEName->setText(query.value("product_name").toString());
        ui->lECode->setText(query.value("product_code").toString());
        ui->lEUOM->setText(query.value("product_uom").toString());
        ui->lEPrice->setText(query.value("sales_price").toString());
        ui->lEMRP->setText(query.value("max_price").toString());
        ui->chkStatus->setChecked(query.value("active_status").toBool());
        ui->lEName->setFocus();
    }
    else {
        QMessageBox::information(this, "Product select error", query.lastError().text());
    }
}
