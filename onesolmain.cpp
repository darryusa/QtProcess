<<<<<<< HEAD
#include "onesolmain.h"
#include "staffwindow.h"
#include "dbmanager.h"
#include <QStackedWidget>
#include <QDesktopWidget>
#include <logindialog.h>
OneSolMain::OneSolMain( QWidget *parent ) : QWidget( parent )
{

    staffWindow = new StaffWindow( this );
    menuWindow = new MenuWindow(this);
    LoginDialog *loginReport = new LoginDialog(this);
    stackedWidget = new QStackedWidget;
    stackedWidget->addWidget( staffWindow );
    stackedWidget->addWidget(menuWindow);
    stackedWidget->addWidget(loginReport);
    stackedWidget->setCurrentWidget( staffWindow );


    QRect screenGeometry = QDesktopWidget().availableGeometry( this );
    stackedWidget->resize( screenGeometry.size() );
  //  connect( menuWindow, )
     //connect( loginWindow, SIGNAL( logIn() ), this, SLOT( UserLoggedIn() ) );

    stackedWidget->show();

//    LoginDialog *loginReport = new LoginDialog(this);
//    loginReport->setModal(true);
//    loginReport->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
//    loginReport->show();

}

OneSolMain::~OneSolMain()
{

}
//void OneSolMain::reportButtonClicked()
//{
//        loginReport->setModal(true);
//        loginReport->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
//        loginReport->show();
//}

void OneSolMain::UserLoggedIn()
{
    stackedWidget->setCurrentWidget( staffWindow );
}
=======
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
    stackedWidget->addWidget(reportListDialog);
    stackedWidget->addWidget( staffWindow );
    stackedWidget->addWidget(menuWindow);
    stackedWidget->addWidget(reportsWindow);
    stackedWidget->setCurrentWidget( menuWindow );
    stackedWidget->show();


//    staffWindow = new StaffWindow( this );
//    menuWindow = new MenuWindow(this);
//    //LoginDialog *loginReport = new LoginDialog(this);

//    stackedWidget = new QStackedWidget;
//    stackedWidget->addWidget( staffWindow );
//    stackedWidget->addWidget(menuWindow);
    connect(loginReport, SIGNAL(reportLoggedin()), this, SLOT(reportSlotLoggedin()));
    connect(loginStaff, SIGNAL(staffLoggedin()), this, SLOT(staffSlotLoggedin()));
    connect(menuWindow, SIGNAL(reportClicked()), this, SLOT(reportButtonClicked()));
    connect(menuWindow, SIGNAL(staffClicked()), this, SLOT(staffClick()));
    QRect screenGeometry = QDesktopWidget().availableGeometry( this );
    stackedWidget->resize( screenGeometry.size() );
  //  connect( menuWindow, )


    stackedWidget->show();


    //reportsWindow->startDateCal

    //connect(loginStaff, SIGNAL(staffClicked()), this, SLOT(staffClick()));
//    connect( menuWindow, SIGNAL( reportLogin() ), this, SLOT( reportButtonClicked() ) );

//    LoginDialog *loginReport = new LoginDialog(this);
//    loginReport->setModal(true);
//    loginReport->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
//    loginReport->show();


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
void OneSolMain::UserLoggedIn()
{
    stackedWidget->setCurrentWidget( reportsWindow );
}

void OneSolMain::staffSlotLoggedin()
{
    stackedWidget->setCurrentWidget(staffWindow);
    loginStaff->hide();
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
>>>>>>> origin/master
