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
