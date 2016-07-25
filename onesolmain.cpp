#include "onesolmain.h"
#include "staffwindow.h"
#include "reportswindow.h"
#include <QStackedWidget>
#include <QDesktopWidget>
#include <logindialog.h>
OneSolMain::OneSolMain( QWidget *parent ) : QWidget( parent )
{
    //initialize variable
    menuWindow = new MainWindow(this);
    reportsWindow = new ReportsWindow(this);
    stackedWidget = new QStackedWidget;
    transactionWindow = new TransactionWindow(this);
    inventoryWindow = new InventoryWindow(this);
    staffWindow = new StaffWindow( this );
    loginStaff = new LoginDialog(menuWindow,"staff");
    loginReport = new LoginDialog(menuWindow,"report");
    loginSale = new LoginDialog(menuWindow,"sale");
    loginInventory = new LoginDialog(menuWindow,"inventory");
    stackedWidget->addWidget(loginInventory);
    stackedWidget->addWidget(transactionWindow);
    stackedWidget->addWidget( staffWindow );
    stackedWidget->addWidget(menuWindow);
    stackedWidget->addWidget(reportsWindow);
    stackedWidget->addWidget(inventoryWindow);
    stackedWidget->setCurrentWidget( menuWindow );


    // connect SIGNAL and slots
    connect(loginReport, SIGNAL(reportLoggedin()), this, SLOT(reportSlotLoggedin()));
    connect(loginStaff, SIGNAL(staffLoggedin()), this, SLOT(staffSlotLoggedin()));
    connect(loginSale, SIGNAL(saleLoggin()), this, SLOT(saleLogginSlot()));
    connect(loginInventory,SIGNAL(inventoryLogin()),this, SLOT(inventoryLoggedin()));
    connect(menuWindow, SIGNAL(reportClicked()), this, SLOT(reportButtonClicked()));
    connect(menuWindow, SIGNAL(staffClicked()), this, SLOT(staffClick()));
    connect(menuWindow,SIGNAL(saleClicked()), this, SLOT(saleClicked()));
    connect(menuWindow,SIGNAL(inventoryClicked()), this, SLOT(inventoryClicked()));
    connect(staffWindow,SIGNAL(staffReturn()),this,SLOT(staffReturned()));
    connect(inventoryWindow,SIGNAL(inventoryReturn()),this,SLOT(staffReturned()));
    connect(this,SIGNAL(saleLogginSignal()),transactionWindow,SLOT(transactionLoggedin()));
    connect(transactionWindow,SIGNAL(returnToMain()),this,SLOT(returnFromTransactionSlot()));
    connect(reportsWindow,SIGNAL(returnFromReport()),this,SLOT(returnFromReportSlot()));
    QRect screenGeometry = QDesktopWidget().availableGeometry( this );

    stackedWidget->resize( screenGeometry.size() );


    stackedWidget->show();


}

OneSolMain::~OneSolMain()
{

}
void OneSolMain::reportButtonClicked()
{
        loginReport->setModal(true);
        loginReport->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
        loginReport->show();


}
void OneSolMain::returnFromReportSlot()
{
    stackedWidget->setCurrentWidget(menuWindow);
}

void OneSolMain::returnFromTransactionSlot()
{
    stackedWidget->setCurrentWidget(menuWindow);
}

void OneSolMain::UserLoggedIn()
{
    stackedWidget->setCurrentWidget( reportsWindow );
}

void OneSolMain::staffSlotLoggedin()
{
    stackedWidget->setCurrentWidget(staffWindow);
    loginStaff->hide();
}

void OneSolMain::staffReturned()
{
    stackedWidget->setCurrentWidget(menuWindow);

}
void OneSolMain::reportSlotLoggedin()
{
    stackedWidget->setCurrentWidget(reportsWindow);
    loginReport->hide();
}

void OneSolMain::staffClick()
{
    loginStaff->setModal(true);
    loginStaff->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    loginStaff->show();
}
void OneSolMain::saleClicked()
{
    loginSale->setModal(true);
    loginSale->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    loginSale->open();
}
void OneSolMain::saleLogginSlot()
{
    loginSale->hide();
    emit saleLogginSignal();
    stackedWidget->setCurrentWidget(transactionWindow);
}
void OneSolMain::inventoryClicked()
{
    loginInventory->setModal(true);
    loginInventory->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    loginInventory->show();
}
void OneSolMain::inventoryLoggedin()
{
    loginInventory->hide();
    stackedWidget->setCurrentWidget(inventoryWindow);
}
