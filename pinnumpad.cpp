#include "pinnumpad.h"
#include "ui_pinnumpad.h"
#include <QDebug>
PINNumPad::PINNumPad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PINNumPad)
{
    ui->setupUi(this);
    for ( int i = 0; i < ui->passwordButtonLayout->count(); i++ )
    {
        // Retrieve current widget, convert to QPushButton
        QWidget* widget = ui->passwordButtonLayout->itemAt( i )->widget();
        QPushButton* button = qobject_cast<QPushButton*>( widget );

        QString buttonText = button->text();
        // Connects this button to the lineEdit widget
        //QString local = loginSender;
        if ( button )
        {
            if ( buttonText.compare( "Enter" ) == 0 )
            {
                connect( button, SIGNAL( clicked() ), this, SLOT( enterButtonPressed() ) );
            }
            else if ( buttonText.compare( "Back" ) == 0 )
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

PINNumPad::~PINNumPad()
{
    delete ui;
}
void PINNumPad::backButtonPressed()
{
    delete ui;
}
void PINNumPad::keyboardButtonPressed()
{
    ui->lineEdit->clear();
    QPushButton* button = qobject_cast<QPushButton*>( sender() );
    qDebug() << "keypressed";
    // Inserts text from button into lineEdit widget.
    if ( button )
    {
        QString currentText = ui->lineEdit->text();
            ui->lineEdit->setMaxLength( 4 );
        if ( currentText.length() > 4 )
        {
            ui->lineEdit->clear();
            ui->lineEdit->setEchoMode( QLineEdit::Password );
            ui->lineEdit->setMaxLength( 4 );
        }

        ui->lineEdit->insert( button->text() );
    }
}
