#include "inventorywindow.h"
#include "ui_inventorywindow.h"
#include "qsqlquery.h"
#include "qmessagebox.h"
#include "qsqlerror.h"
#include "itemmodify.h"

QString InventoryWindow::selectedName;
bool InventoryWindow::modifyItem;
InventoryWindow::InventoryWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InventoryWindow)
{
    ui->setupUi(this);
    populateTable();

}

void InventoryWindow::populateTable()
{
    this->model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM [main].[inventory] WHERE quantity != 0 ");
    sort_filter = new QSortFilterProxyModel(this);
    sort_filter->setSourceModel(model);
    sort_filter->sort (0);
    sort_filter->setFilterKeyColumn(-1);
    this->ui->tableView->setModel( sort_filter );
    ui->tableView->horizontalHeader()->resizeSections(QHeaderView::ResizeToContents);

}

void InventoryWindow::setSender(bool sender)
{
    InventoryWindow::modifyItem = sender;
}

bool InventoryWindow::getSender()
{
    return modifyItem;
}

void InventoryWindow::setSelectedName(QString source)
{
    InventoryWindow::selectedName  = source;
}

QString InventoryWindow::getSelectedName()
{
    return selectedName;
}

InventoryWindow::~InventoryWindow()
{
    delete ui;
}


void InventoryWindow::on_searchLineEdit_textChanged(const QString &arg1)
{
    sort_filter->setFilterFixedString(arg1);
    sort_filter->mapToSource(sort_filter->index(0,0));
}

void InventoryWindow::on_tableView_clicked(const QModelIndex &index)
{
    InventoryWindow::selectedName = ui->tableView->model()->data(index).toString();

}

void InventoryWindow::on_removeButton_clicked()
{
    QSqlQuery qry4;
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Warning","Deleteing an item from inventory, Continue?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        if(InventoryWindow::selectedName.length()>0)
        {

            qry4.prepare("DELETE FROM inventory WHERE id= '"+InventoryWindow::selectedName+"' or name= '"+InventoryWindow::selectedName+"' "
                      "or description= '"+InventoryWindow::selectedName+"' or price= '"+InventoryWindow::selectedName+"' or category = '"+InventoryWindow::selectedName+"' ");


            if(qry4.exec())
            {
              QMessageBox::critical(this,tr("DELETE"),tr("DELETED"));

            }
            else
            {
                QMessageBox::critical(this,tr("error"),qry4.lastError().text());
            }
            InventoryWindow::selectedName = "";
            model->setQuery("SELECT * FROM [main].[inventory] WHERE quantity != 0");
        }
    }
}


void InventoryWindow::on_addButton_clicked()
{
    InventoryWindow::setSender(false);
    itemModify = new ItemModify(this);
    connect(itemModify,SIGNAL( returnToInventory()), this, SLOT(returnedFromItemModify()));
    itemModify->setModal(true);
    itemModify->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    itemModify->show();
}

void InventoryWindow::on_editButton_clicked()
{

    InventoryWindow::setSender(true);
    itemModify = new ItemModify(this);
    connect(itemModify,SIGNAL( returnToInventory()), this, SLOT(returnedFromItemModify()));
    itemModify->setModal(true);
    itemModify->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    itemModify->show();
}

void InventoryWindow::on_returnButton_clicked()
{
    emit inventoryReturn();
}
void InventoryWindow::returnedFromItemModify()
{
    model->setQuery("SELECT * FROM [main].[inventory] WHERE quantity != 0");
    itemModify->deleteLater();
}
