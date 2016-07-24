#include "itemmodify.h"
#include "ui_itemmodify.h"
#include "inventorywindow.h"
#include "qsqlquery.h"
#include "qmessagebox.h"
#include <qsqlerror.h>

ItemModify::ItemModify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemModify)
{
    ui->setupUi(this);
    if(InventoryWindow::getSender())
    {
        autoFill();
    }
}

static double extractDouble(const QString &s)
{
    QString num;
    foreach(QChar c, s) {
        if (c.isDigit() || c == '.' || c == '-') {
            num.append(c);
        }
    }
    bool ok;
    double ret = num.toFloat(&ok);
    if (ok) {
        return ret;
    } else {
        throw "Cannot extract double value";
    }
}
ItemModify::~ItemModify()
{
    delete ui;
}
void ItemModify::autoFill()
{
    QSqlQuery qry;
    qry.prepare("SELECT * FROM inventory where id= '"+InventoryWindow::getSelectedName()+"' or name= '"+InventoryWindow::getSelectedName()+"' "
                  "or description= '"+InventoryWindow::getSelectedName()+"' or price= '"+InventoryWindow::getSelectedName()+"' "
                "or category= '"+InventoryWindow::getSelectedName()+"' or quantity= '"+InventoryWindow::getSelectedName()+"' ");
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->ID->setText(qry.value(0).toString());
            ui->nameLineEdit->setText(qry.value(1).toString());
            ui->quantitySpinBox->setValue(qry.value(3).value<int>());
            ui->priceLineEdit->setText(qry.value(4).toString());
            ui->categoryComboBox->setCurrentText(qry.value(5).toString());
            ui->descriptionLineEdit->setText(qry.value(2).toString());

        }
    }
}

void ItemModify::on_pushButton_clicked()
{
    if(ui->nameLineEdit->text() !="" && ui->quantitySpinBox->value() !=0 && ui->priceLineEdit->text() != ""
            && ui->categoryComboBox->currentText() != "")
    {
        bool ok;
        if(InventoryWindow::getSender() )
        {
            QSqlQuery qry3;
            qry3.prepare("UPDATE inventory SET name =(:name),quantity =(:quantity),price =(:price),category =(:category),description =(:description)"
                         "WHERE ID=(:id)");

            qry3.bindValue(":name" ,ui->nameLineEdit->text());
            qry3.bindValue(":quantity",ui->quantitySpinBox->value());
            qry3.bindValue(":price",extractDouble(ui->priceLineEdit->text()));
            qry3.bindValue(":category",ui->categoryComboBox->currentText());
            qry3.bindValue(":id",ui->ID->text().toInt(&ok,10));
            qry3.bindValue(":description",ui->descriptionLineEdit->text());
            if(qry3.exec())
            {
                QMessageBox::critical(this,tr("Save"),tr("Saved"));
                emit returnToInventory();
            }
            else
            {
                QMessageBox::critical(this,tr("Error"),qry3.lastError().text());
            }
        }
        else
        {
            QSqlQuery qry4;

            qry4.prepare("INSERT INTO inventory (name,quantity,price,category,description)"
                         " VALUES ( :name,:quantity,:price,:category,:description )" );

            qry4.bindValue(":name" ,ui->nameLineEdit->text());
            qry4.bindValue(":quantity",ui->quantitySpinBox->value());
            qry4.bindValue(":price",extractDouble(ui->priceLineEdit->text()));
            qry4.bindValue(":category",ui->categoryComboBox->currentText());
            qry4.bindValue(":description",ui->descriptionLineEdit->text());
            if(qry4.exec())
            {
                QMessageBox::critical(this,tr("Save"),tr("Saved"));
                emit returnToInventory();
            }
            else
            {
                QMessageBox::critical(this,tr("Error"),qry4.lastError().text());
            }
        }
    }
    else
    {

    }
}

void ItemModify::on_pushButton_2_clicked()
{
    emit returnToInventory();
}
