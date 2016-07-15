#include "staffwindow.h"
#include "ui_staffwindow.h"
#include "dbmanager.h"
#include "qdebug.h"


StaffWindow::StaffWindow(QWidget *parent) : QWidget(parent), ui(new Ui::StaffWindow)
{
    ui->setupUi(this);
    //QAbstractItemModel *model = new QAbstractItemModel;

   // QTableView *tableView = ui->tableView;
    //tableView->setModel( model ); // SQL Database QAbstractItemModel model here

   // model->setHeaderData( 0, Qt::Horizontal, QObject::tr( "First Name") );
    //model->setHeaderData( 1, Qt::Horizontal, QObject::tr( "Last Name" ) );

    DbManager *dbmanager = new DbManager("../processDB");

    QSqlQuery query("SELECT last FROM employee");
        while (query.next()) {
            QString name = query.value(0).toString();
            qDebug() << name;
        }

//    connect( ui->Add, SIGNAL( clicked() ), this, SLOT( AddButtonPressed() ) );
//    connect( ui->Remove, SIGNAL( clicked() ), this, SLOT( RemoveButtonPressed() ) );
}

StaffWindow::~StaffWindow()
{
    delete ui;
}

// Input Popup and keyboard appears, input is sent to database.
void StaffWindow::AddButtonPressed()
{

}

// Employee removed from database and from the GUI table.
void StaffWindow::RemoveButtonPressed()
{

}
