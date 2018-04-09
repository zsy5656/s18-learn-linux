#-------------------------------------------------
#
# Project created by QtCreator 2018-03-15T13:46:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cu-learn-linux
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

LIBS += -L"/usr/local/lib" -lqtermwidget4 -lsource-highlight-qt4

RESOURCES += \
    resources.qrc
