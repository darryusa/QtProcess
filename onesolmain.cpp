#include "onesolmain.h"
#include "staffwindow.h"
#include "dbmanager.h"
#include <QStackedWidget>
#include <QDesktopWidget>

OneSolMain::OneSolMain( QWidget *parent ) : QWidget( parent )
{

    staffWindow = new StaffWindow( this );
    menuWindow = new MenuWindow(this);
    stackedWidget = new QStackedWidget;
    stackedWidget->addWidget( staffWindow );
    stackedWidget->addWidget(menuWindow);
    stackedWidget->setCurrentWidget( menuWindow );


    QRect screenGeometry = QDesktopWidget().availableGeometry( this );
    stackedWidget->resize( screenGeometry.size() );
  //  connect( menuWindow, )
   // connect( loginWindow, SIGNAL( logIn() ), this, SLOT( UserLoggedIn() ) );

    stackedWidget->show();
}

OneSolMain::~OneSolMain()
{

}

void OneSolMain::UserLoggedIn()
{
    stackedWidget->setCurrentWidget( staffWindow );
}
