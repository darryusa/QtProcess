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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportsWindow
{
public:
    QLabel *startLabel;
    QCalendarWidget *startDateCal;
    QLabel *endLabel;
    QCalendarWidget *endDateCal;
    QPushButton *generateButton;
    QLabel *pictureLabel;
    QFrame *frame_2;
    QLabel *label;

    void setupUi(QWidget *ReportsWindow)
    {
        if (ReportsWindow->objectName().isEmpty())
            ReportsWindow->setObjectName(QStringLiteral("ReportsWindow"));
        ReportsWindow->resize(1024, 600);
        startLabel = new QLabel(ReportsWindow);
        startLabel->setObjectName(QStringLiteral("startLabel"));
        startLabel->setGeometry(QRect(80, 100, 351, 51));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        startLabel->setFont(font);
        startLabel->setAlignment(Qt::AlignCenter);
        startDateCal = new QCalendarWidget(ReportsWindow);
        startDateCal->setObjectName(QStringLiteral("startDateCal"));
        startDateCal->setGeometry(QRect(80, 140, 351, 251));
        endLabel = new QLabel(ReportsWindow);
        endLabel->setObjectName(QStringLiteral("endLabel"));
        endLabel->setGeometry(QRect(500, 110, 371, 31));
        endLabel->setFont(font);
        endLabel->setAlignment(Qt::AlignCenter);
        endDateCal = new QCalendarWidget(ReportsWindow);
        endDateCal->setObjectName(QStringLiteral("endDateCal"));
        endDateCal->setGeometry(QRect(500, 140, 371, 251));
        generateButton = new QPushButton(ReportsWindow);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(340, 440, 321, 111));
        QFont font1;
        font1.setPointSize(24);
        generateButton->setFont(font1);
        generateButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        pictureLabel = new QLabel(ReportsWindow);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(0, 0, 1024, 600));
        pictureLabel->setAutoFillBackground(true);
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/background.jpg")));
        pictureLabel->setScaledContents(true);
        frame_2 = new QFrame(ReportsWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 1000, 61));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(90, 130, 31);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 0, 931, 61));
        QFont font2;
        font2.setPointSize(36);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        pictureLabel->raise();
        startLabel->raise();
        startDateCal->raise();
        endLabel->raise();
        endDateCal->raise();
        generateButton->raise();
        frame_2->raise();

        retranslateUi(ReportsWindow);

        QMetaObject::connectSlotsByName(ReportsWindow);
    } // setupUi

    void retranslateUi(QWidget *ReportsWindow)
    {
        ReportsWindow->setWindowTitle(QApplication::translate("ReportsWindow", "Form", 0));
        startLabel->setText(QApplication::translate("ReportsWindow", "Select the start date:", 0));
        endLabel->setText(QApplication::translate("ReportsWindow", "Select the end date:", 0));
        generateButton->setText(QApplication::translate("ReportsWindow", "Generate Reports", 0));
        pictureLabel->setText(QString());
        label->setText(QApplication::translate("ReportsWindow", "Transaction Report", 0));
    } // retranslateUi

};

namespace Ui {
    class ReportsWindow: public Ui_ReportsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSWINDOW_H
