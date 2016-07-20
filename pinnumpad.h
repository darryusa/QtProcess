#ifndef PINNUMPAD_H
#define PINNUMPAD_H

#include <QDialog>

namespace Ui {
class PINNumPad;
}

class PINNumPad : public QDialog
{
    Q_OBJECT

public:
    explicit PINNumPad(QWidget *parent = 0);
    ~PINNumPad();
    QString getPIN();
private:
    Ui::PINNumPad *ui;
    int count;
    QString oldPin;
    QFont *font;
    void setPIN(QString PIN);
    QString PINNumber;

private slots:
    void keyboardButtonPressed();
    void backButtonPressed();

    void enterButtonPressed();
};

#endif // PINNUMPAD_H
