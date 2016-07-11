#include "onesolmain.h"
#include "loginwindow.h"
#include "staffwindow.h"
#include "dbmanager.h"
#include <QStackedWidget>
#include <QDesktopWidget>

OneSolMain::OneSolMain( QWidget *parent ) : QWidget( parent )
{
    loginWindow = new LoginWindow( this );
    staffWindow = new StaffWindow( this );
    DbManager *dbmanager = new DbManager("/home/neal/Desktop/processDB");
    stackedWidget = new QStackedWidget;
    stackedWidget->addWidget( loginWindow );
    stackedWidget->addWidget( staffWindow );
    stackedWidget->setCurrentWidget( loginWindow );
    const QString& name = "Neal-Nguyen";
    dbmanager->addPerson(name);
    QRect screenGeometry = QDesktopWidget().availableGeometry( this );
    stackedWidget->resize( screenGeometry.size() );

    connect( loginWindow, SIGNAL( logIn() ), this, SLOT( UserLoggedIn() ) );

    stackedWidget->show();
}

OneSolMain::~OneSolMain()
{

}

void OneSolMain::UserLoggedIn()
{
    stackedWidget->setCurrentWidget( staffWindow );
}
