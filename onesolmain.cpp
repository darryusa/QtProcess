#include "onesolmain.h"
#include "staffwindow.h"
#include "reportswindow.h"
#include "dbmanager.h"
#include <QStackedWidget>
#include <QDesktopWidget>
#include <logindialog.h>
#include <QDebug>
OneSolMain::OneSolMain( QWidget *parent ) : QWidget( parent )
{
    staffWindow = new StaffWindow( this );
    menuWindow = new MenuWindow(this);
    reportsWindow = new ReportsWindow(this);
    stackedWidget = new QStackedWidget;
    reportListDialog = new ReportListDialog(this);
    loginStaff = new LoginDialog(this,"staff");
    loginReport = new LoginDialog(this,"report");
    transactionWindow = new TransactionWindow(this);
    loginSale = new LoginDialog(this,"sale");
    stackedWidget->addWidget(transactionWindow);
    stackedWidget->addWidget(reportListDialog);
    stackedWidget->addWidget( staffWindow );
    stackedWidget->addWidget(menuWindow);
    stackedWidget->addWidget(reportsWindow);
    stackedWidget->setCurrentWidget( menuWindow );



    connect(loginReport, SIGNAL(reportLoggedin()), this, SLOT(reportSlotLoggedin()));
    connect(loginStaff, SIGNAL(staffLoggedin()), this, SLOT(staffSlotLoggedin()));
    connect(loginSale, SIGNAL(saleLoggin()), this, SLOT(saleLogginSlot()));
    connect(menuWindow, SIGNAL(reportClicked()), this, SLOT(reportButtonClicked()));
    connect(menuWindow, SIGNAL(staffClicked()), this, SLOT(staffClick()));
    connect(menuWindow,SIGNAL(saleClicked()), this, SLOT(saleClicked()));
    connect(staffWindow,SIGNAL(staffReturn()),this,SLOT(staffReturned()));
    connect(this,SIGNAL(saleLogginSignal()),transactionWindow,SLOT(transactionLoggedin()));
    connect(transactionWindow,SIGNAL(returnToMain()),this,SLOT(returnFromTransactionSlot()));
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
    stackedWidget->setCurrentWidget(reportListDialog);
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
    loginSale->show();
}
void OneSolMain::saleLogginSlot()
{
    loginSale->hide();
    emit saleLogginSignal();
    stackedWidget->setCurrentWidget(transactionWindow);
}
