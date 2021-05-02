QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    claveop.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    ope.cpp \
    usuario.cpp \
    ventana1.cpp \
    ventana2.cpp

HEADERS += \
    claveop.h \
    login.h \
    mainwindow.h \
    ope.h \
    usuario.h \
    ventana1.h \
    ventana2.h

FORMS += \
    claveop.ui \
    login.ui \
    mainwindow.ui \
    ope.ui \
    ventana1.ui \
    ventana2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
