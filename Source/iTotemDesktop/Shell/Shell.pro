#-------------------------------------------------
#
# Project created by QtCreator 2018-11-05T18:31:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Shell
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        TotemMainWindow.cpp \
    ContentView.cpp \
    SessionResolver.cpp \
    IContentView.cpp \
    ContentViewPresenter.cpp \
    ContentListView.cpp \
    MediaContentView.cpp \
    IContentListView.cpp

HEADERS += \
        TotemMainWindow.h \
    ContentView.h \
    SessionResolver.h \
    IContentView.h \
    ContentViewPresenter.h \
    ContentListView.h \
    MediaContentView.h \
    IContentListView.h

FORMS += \
        TotemMainWindow.ui \
    ContentView.ui \
    ContentListView.ui \
    MediaContentView.ui

# Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Core/release/ -lCore
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Core/debug/ -lCore
else:unix: LIBS += -L$$OUT_PWD/../Core/ -lCore

INCLUDEPATH += $$PWD/../Core
DEPENDPATH += $$PWD/../Core
