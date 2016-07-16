#ifndef TRANSACTIONWINDOW_H
#define TRANSACTIONWINDOW_H

#include <QWidget>
//trans test 2
//trans test 3
namespace Ui {
class TransactionWindow;
}

class TransactionWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TransactionWindow(QWidget *parent = 0);
    ~TransactionWindow();

private:
    Ui::TransactionWindow *ui;
};

#endif // TRANSACTIONWINDOW_H
