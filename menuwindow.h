#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QWidget>

namespace Ui {
class MenuWindow;
}

class MenuWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MenuWindow(QWidget *parent = 0);
    ~MenuWindow();
    void reportsButtonPressed();
private:
    Ui::MenuWindow *ui;

signals:
    void callLogin();
    void on_reportButton_clicked();

};

#endif // MENUWINDOW_H
