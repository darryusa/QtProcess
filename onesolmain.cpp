#include "onesolmain.h"
#include "loginwindow.h"
#include "staffwindow.h"
#include "reportswindow.h"
#include "dbmanager.h"
#include <QStackedWidget>
#include <QDesktopWidget>

OneSolMain::OneSolMain( QWidget *parent ) : QWidget( parent )
{
    loginWindow = new LoginWindow( this );
    staffWindow = new StaffWindow( this );
    menuWindow = new MenuWindow(this);
    reportsWindow = new ReportsWindow(this);
    stackedWidget = new QStackedWidget;
    stackedWidget->addWidget( loginWindow );
    stackedWidget->addWidget( staffWindow );
    stackedWidget->addWidget(menuWindow);
    stackedWidget->addWidget(reportsWindow);
    stackedWidget->setCurrentWidget( menuWindow );
    const QString& name = "Neal-Nguyen";

    QRect screenGeometry = QDesktopWidget().availableGeometry( this );
    stackedWidget->resize( screenGeometry.size() );

    connect( loginWindow, SIGNAL( logIn() ), this, SLOT( UserLoggedIn() ) );

    stackedWidget->show();

    reportsWindow->startDateCal
}

OneSolMain::~OneSolMain()
{

}

void OneSolMain::UserLoggedIn()
{
    stackedWidget->setCurrentWidget( reportsWindow );
}
