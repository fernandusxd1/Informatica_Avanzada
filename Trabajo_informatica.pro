QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ingenieria.cpp \
    administrador.cpp \
    c_pass.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    usuario.cpp \
    claveop.cpp \
    ope.cpp \
    ventana1.cpp \
    ventana2.cpp \

HEADERS += \
    ingenieria.h \
    administrador.h \
    c_pass.h \
    login.h \
    mainwindow.h \
    usuario.h \
    claveop.h \
    ope.h \
    ventana1.h \
    ventana2.h \

FORMS += \
    ingenieria.ui \
    administrador.ui \
    c_pass.ui \
    login.ui \
    mainwindow.ui \
    claveop.ui \
    ope.ui \
    ventana1.ui \
    ventana2.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
