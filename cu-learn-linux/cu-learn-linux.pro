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

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/srchiliteqt/release/ -lsource-highlight-qt4
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/srchiliteqt/debug/ -lsource-highlight-qt4
else:unix: LIBS += -L$$PWD/srchiliteqt/ -lsource-highlight-qt4

INCLUDEPATH += $$PWD/srchiliteqt $$PWD/qtermwidget
DEPENDPATH += $$PWD/srchiliteqt $$PWD/qtermwidget

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/srchiliteqt/release/libsource-highlight-qt4.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/srchiliteqt/debug/libsource-highlight-qt4.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/srchiliteqt/release/source-highlight-qt4.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/srchiliteqt/debug/source-highlight-qt4.lib
else:unix: PRE_TARGETDEPS += $$PWD/srchiliteqt/libsource-highlight-qt4.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/srchiliteqt/release/ -lsource-highlight-qt4
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/srchiliteqt/debug/ -lsource-highlight-qt4
else:unix: LIBS += -L$$PWD/srchiliteqt/ -lsource-highlight-qt4

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/qtermwidget/release/ -lqtermwidget5
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/qtermwidget/debug/ -lqtermwidget5
else:unix: LIBS += -L$$PWD/qtermwidget/ -lqtermwidget5


RESOURCES += \
    resources.qrc
