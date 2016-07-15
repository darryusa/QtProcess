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


SOURCES += main.cpp\
        onesolmain.cpp \
    staffwindow.cpp \
    dbmanager.cpp \
    menuwindow.cpp \
    reportswindow.cpp\
    logindialog.cpp

HEADERS  += onesolmain.h \
    staffwindow.h \
    dbmanager.h \
    menuwindow.h \
    reportswindow.h \
    logindialog.h \
    singleton.h

FORMS += \
    staffwindow.ui \
    menuwindow.ui \
    reportswindow.ui \
    logindialog.ui
    logindialog.ui

RESOURCES += \
    resource.qrc
