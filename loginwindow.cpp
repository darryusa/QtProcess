#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "dbmanager.h"
#include <QDebug>
LoginWindow::LoginWindow(QWidget *parent) : QWidget(parent), ui(new Ui::LoginWindow)
{
    ui->setupUi( this );

    // Loops through buttons 0-9
    for ( int i = 0; i < ui->passwordButtonLayout->count(); i++ )
    {
        // Retrieve current widget, convert to QPushButton
        QWidget* widget = ui->passwordButtonLayout->itemAt( i )->widget();
        QPushButton* button = qobject_cast<QPushButton*>( widget );

        QString buttonText = button->text();
        // Connects this button to the lineEdit widget

        if ( button )
        {
            if ( buttonText.compare( "ENTER" ) == 0 )
            {
                connect( button, SIGNAL( clicked() ), this, SLOT( enterButtonPressed() ) );
            }
            else if ( buttonText.compare( "BACK" ) == 0 )
            {
                connect( button, SIGNAL( clicked() ), this, SLOT( backButtonPressed() ) );
            }
            else
            {
                connect( button, SIGNAL( clicked() ), this, SLOT( keyboardButtonPressed() ) );
            }
        }
    }
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

// Slot to act when a password button is pressed
void LoginWindow::keyboardButtonPressed()
{
    QPushButton* button = qobject_cast<QPushButton*>( sender() );

    // Inserts text from button into lineEdit widget.
    if ( button )
    {
        QString currentText = ui->pinInput->text();

        if ( currentText.length() > 4 )
        {
            ui->pinInput->clear();
            ui->pinInput->setEchoMode( QLineEdit::Password );
            ui->pinInput->setMaxLength( 4 );
        }

        ui->pinInput->insert( button->text() );
    }
}

void LoginWindow::enterButtonPressed()
{
    QPushButton* button = qobject_cast<QPushButton*>( sender() );
    QString currentText = ui->pinInput->text();

    if ( button && currentText.length() == 4 )
    {
        passwordCheck();
    }
}

void LoginWindow::backButtonPressed()
{
    QPushButton* button = qobject_cast<QPushButton*>( sender() );

    if ( button && ui->pinInput->text().length() <= 4 )
    {
        ui->pinInput->backspace();
    }
}

void LoginWindow::passwordCheck()
{
<<<<<<< HEAD
    QString currentText = ui->lineEdit->text();
    DbManager *dbmanager = new DbManager("/home/jessica/Desktop/processDB");
=======
    QString currentText = ui->pinInput->text();
    DbManager *dbmanager = new DbManager("/home/neal/Desktop/processDB");
>>>>>>> master
    // Password: "0000" for testing. Check database here.
    if ( dbmanager->pinChecker(currentText))
    {
        ui->pinInput->setEchoMode( QLineEdit::Normal );
        ui->pinInput->setMaxLength( 32767 );
        ui->pinInput->setText("Success");
        emit logIn();
    }
    else
    {
        ui->pinInput->setEchoMode( QLineEdit::Normal );
        ui->pinInput->setMaxLength( 32767 );
        ui->pinInput->setText("Invalid PIN");
    }
}
