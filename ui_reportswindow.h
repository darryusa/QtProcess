/********************************************************************************
** Form generated from reading UI file 'reportswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSWINDOW_H
#define UI_REPORTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportsWindow
{
public:
    QLabel *mainLabel;
    QLabel *startLabel;
    QCalendarWidget *startDateCal;
    QLabel *endLabel;
    QCalendarWidget *endDateCal;
    QPushButton *generateButton;

    void setupUi(QWidget *ReportsWindow)
    {
        if (ReportsWindow->objectName().isEmpty())
            ReportsWindow->setObjectName(QStringLiteral("ReportsWindow"));
        ReportsWindow->resize(1024, 600);
        mainLabel = new QLabel(ReportsWindow);
        mainLabel->setObjectName(QStringLiteral("mainLabel"));
        mainLabel->setGeometry(QRect(110, 10, 771, 71));
        QFont font;
        font.setFamily(QStringLiteral("Bitstream Charter"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        mainLabel->setFont(font);
        mainLabel->setAlignment(Qt::AlignCenter);
        startLabel = new QLabel(ReportsWindow);
        startLabel->setObjectName(QStringLiteral("startLabel"));
        startLabel->setGeometry(QRect(120, 100, 211, 51));
        QFont font1;
        font1.setPointSize(14);
        startLabel->setFont(font1);
        startDateCal = new QCalendarWidget(ReportsWindow);
        startDateCal->setObjectName(QStringLiteral("startDateCal"));
        startDateCal->setGeometry(QRect(80, 140, 351, 251));
        endLabel = new QLabel(ReportsWindow);
        endLabel->setObjectName(QStringLiteral("endLabel"));
        endLabel->setGeometry(QRect(550, 110, 221, 31));
        QFont font2;
        font2.setPointSize(16);
        endLabel->setFont(font2);
        endDateCal = new QCalendarWidget(ReportsWindow);
        endDateCal->setObjectName(QStringLiteral("endDateCal"));
        endDateCal->setGeometry(QRect(500, 140, 371, 251));
        generateButton = new QPushButton(ReportsWindow);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(290, 430, 321, 111));
        QFont font3;
        font3.setPointSize(24);
        generateButton->setFont(font3);

        retranslateUi(ReportsWindow);

        QMetaObject::connectSlotsByName(ReportsWindow);
    } // setupUi

    void retranslateUi(QWidget *ReportsWindow)
    {
        ReportsWindow->setWindowTitle(QApplication::translate("ReportsWindow", "Form", 0));
        mainLabel->setText(QApplication::translate("ReportsWindow", "Sale Reports", 0));
        startLabel->setText(QApplication::translate("ReportsWindow", "Select the start date:", 0));
        endLabel->setText(QApplication::translate("ReportsWindow", "Select the end date:", 0));
        generateButton->setText(QApplication::translate("ReportsWindow", "Generate Reports", 0));
    } // retranslateUi

};

namespace Ui {
    class ReportsWindow: public Ui_ReportsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSWINDOW_H
