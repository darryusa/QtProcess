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

private:
    Ui::PINNumPad *ui;

private slots:
    void keyboardButtonPressed();
    void backButtonPressed();

};

#endif // PINNUMPAD_H
