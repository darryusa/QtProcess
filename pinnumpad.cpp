#include "pinnumpad.h"
#include "ui_pinnumpad.h"
PINNumPad::PINNumPad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PINNumPad)
{
    count = 0;
    ui->setupUi(this);
    ui->lineEdit->setEchoMode( QLineEdit::Normal );
    ui->lineEdit->setText("Enter PIN");
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
QString PINNumPad::getPIN()
{
    return PINNumber;
}
void PINNumPad::setPIN(QString PIN)
{
    PINNumber = PIN;
}
PINNumPad::~PINNumPad()
{
    delete ui;
}
void PINNumPad::backButtonPressed()
{
    this->deleteLater();

}
void PINNumPad::keyboardButtonPressed()
{
    QFont font("San Serif", 40, QFont::Bold,true);
    ui->lineEdit->setFont(font);
    //ui->lineEdit->clear();
    QPushButton* button = qobject_cast<QPushButton*>( sender() );

    // Inserts text from button into lineEdit widget.
    if ( button )
    {

        QString currentText = ui->lineEdit->text();
        if ( currentText.length() > 4 )
        {
            ui->lineEdit->clear();
            ui->lineEdit->setEchoMode( QLineEdit::Password );
            ui->lineEdit->setMaxLength( 4 );
        }

        ui->lineEdit->insert( button->text() );
    }
}

void PINNumPad::enterButtonPressed()
{

    QFont font("San Serif", 40, QFont::Bold,true);
    ui->lineEdit->setFont(font);
    // first time enter pin
    if(count ==0)
    {
        oldPin = ui->lineEdit->text();
        ui->lineEdit->clear();
        ui->lineEdit->setMaxLength(1024);
        ui->lineEdit->setEchoMode( QLineEdit::Normal );
        ui->lineEdit->setText("Re-EnterPin");
        count++;
    }
    // enter pin correct
    else if(count == 1)
    {
        if(oldPin == ui->lineEdit->text())
        {
            setPIN(oldPin);
            this->hide();
        }
        //enter pin incorrect
        else
        {
            count = 0;
            ui->lineEdit->setMaxLength(1024);
            ui->lineEdit->setEchoMode( QLineEdit::Normal );
            ui->lineEdit->setText("NOT MATCH");

        }
    }

}

void PINNumPad::on_backButton_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit->setEchoMode( QLineEdit::Password );
}
