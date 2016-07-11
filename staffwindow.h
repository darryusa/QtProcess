#ifndef STAFFWINDOW_H
#define STAFFWINDOW_H

#include <QWidget>

namespace Ui {
class StaffWindow;
}

class StaffWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StaffWindow( QWidget *parent = 0 );
    ~StaffWindow();

private:
    Ui::StaffWindow *ui;

private slots:
    void RemoveButtonPressed();
    void AddButtonPressed();
};

#endif // STAFFWINDOW_H
