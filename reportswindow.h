#ifndef REPORTSWINDOW_H
#define REPORTSWINDOW_H

#include <QWidget>

namespace Ui {
class ReportsWindow;
}

class ReportsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ReportsWindow(QWidget *parent = 0);
    ~ReportsWindow();

private slots:
    void on_generateButton_clicked();

private:
    Ui::ReportsWindow *ui;
};

#endif // REPORTSWINDOW_H
