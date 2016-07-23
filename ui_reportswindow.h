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
    QLabel *startLabel;
    QLabel *endLabel;
    QCalendarWidget *endDateCal;
    QPushButton *generateButton;
    QLabel *pictureLabel;
    QLabel *label;
    QCalendarWidget *startDateCal;
    QPushButton *returnButton;

    void setupUi(QWidget *ReportsWindow)
    {
        if (ReportsWindow->objectName().isEmpty())
            ReportsWindow->setObjectName(QStringLiteral("ReportsWindow"));
        ReportsWindow->resize(1024, 600);
        startLabel = new QLabel(ReportsWindow);
        startLabel->setObjectName(QStringLiteral("startLabel"));
        startLabel->setGeometry(QRect(90, 90, 351, 51));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        startLabel->setFont(font);
        startLabel->setStyleSheet(QLatin1String("\n"
"\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
""));
        startLabel->setAlignment(Qt::AlignCenter);
        endLabel = new QLabel(ReportsWindow);
        endLabel->setObjectName(QStringLiteral("endLabel"));
        endLabel->setGeometry(QRect(510, 100, 371, 31));
        endLabel->setFont(font);
        endLabel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));
        endLabel->setAlignment(Qt::AlignCenter);
        endDateCal = new QCalendarWidget(ReportsWindow);
        endDateCal->setObjectName(QStringLiteral("endDateCal"));
        endDateCal->setGeometry(QRect(510, 150, 381, 271));
        generateButton = new QPushButton(ReportsWindow);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(340, 440, 341, 111));
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        generateButton->setFont(font1);
        generateButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"}"));
        pictureLabel = new QLabel(ReportsWindow);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(0, 0, 1024, 600));
        pictureLabel->setAutoFillBackground(true);
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/Vs2.0BamBoo.jpg")));
        pictureLabel->setScaledContents(true);
        label = new QLabel(ReportsWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 931, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Symbola"));
        font2.setPointSize(36);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("color: rgb(0, 0, 127);\n"
""));
        label->setAlignment(Qt::AlignCenter);
        startDateCal = new QCalendarWidget(ReportsWindow);
        startDateCal->setObjectName(QStringLiteral("startDateCal"));
        startDateCal->setGeometry(QRect(90, 150, 381, 271));
        returnButton = new QPushButton(ReportsWindow);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(20, 10, 71, 31));
        returnButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(140, 177, 63);\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        returnButton->setIcon(icon);
        returnButton->setIconSize(QSize(71, 31));
        pictureLabel->raise();
        startLabel->raise();
        endLabel->raise();
        endDateCal->raise();
        generateButton->raise();
        label->raise();
        startDateCal->raise();
        returnButton->raise();

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
        returnButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ReportsWindow: public Ui_ReportsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSWINDOW_H
