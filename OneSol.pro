#-------------------------------------------------
#
# Project created by QtCreator 2016-07-10T17:29:52
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OneSol
TEMPLATE = app

//Test
SOURCES += main.cpp\
        onesolmain.cpp \
    staffwindow.cpp \
    dbmanager.cpp \
    menuwindow.cpp \
    reportswindow.cpp\
    logindialog.cpp \
    reportlistdialog.cpp \
    transactionwindow.cpp \
    pinnumpad.cpp

HEADERS  += onesolmain.h \
    staffwindow.h \
    dbmanager.h \
    menuwindow.h \
    reportswindow.h \
    logindialog.h \
    singleton.h \
    reportlistdialog.h \
    transactionwindow.h \
    ui_transactionwindow.h \
    pinnumpad.h

FORMS += \
    staffwindow.ui \
    menuwindow.ui \
    reportswindow.ui \
    logindialog.ui \
    reportlistdialog.ui \
    transactionwindow.ui \
    pinnumpad.ui
    logindialog.ui

RESOURCES += \
    resource.qrc

DISTFILES += \
    transactionwindow.o
