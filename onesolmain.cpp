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
    stackedWidget->addWidget( staffWindow );
    stackedWidget->addWidget(menuWindow);
    stackedWidget->addWidget(reportsWindow);
    stackedWidget->setCurrentWidget( menuWindow );
    const QString& name = "Neal-Nguyen";


    staffWindow = new StaffWindow( this );
    menuWindow = new MenuWindow(this);
    //LoginDialog *loginReport = new LoginDialog(this);
    loginStaff = new LoginDialog(this,"staff");
    stackedWidget = new QStackedWidget;
    stackedWidget->addWidget( staffWindow );
    stackedWidget->addWidget(menuWindow);

    stackedWidget->setCurrentWidget( menuWindow );
    connect(loginStaff, SIGNAL(staffLoggedin()), this, SLOT(staffSlotLoggedin()));
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
       // stackedWidget->addWidget(loginReport);
        loginReport->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    //    stackedWidget->
        loginReport->show();

}
void OneSolMain::UserLoggedIn()
{
    stackedWidget->setCurrentWidget( reportsWindow );
}

void OneSolMain::staffSlotLoggedin()
{
    stackedWidget->setCurrentWidget(staffWindow);
}

void OneSolMain::staffClick()
{
    loginStaff->setModal(true);
    loginStaff->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    loginStaff->show();
}
