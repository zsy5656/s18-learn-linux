#-------------------------------------------------
#
# Project created by QtCreator 2018-03-14T20:48:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = syntax-test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

LIBS    +=  -L /usr/lib -lsource-highlight-qt4 -lqtermwidget5

RESOURCES += \
    resources.qrc \
    resources.qrc
