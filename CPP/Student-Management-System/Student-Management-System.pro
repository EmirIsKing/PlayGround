QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    assignment.cpp \
    chatpage.cpp \
    global.cpp \
    main.cpp \
    mainwindow.cpp \
    message.cpp \
    newmessage.cpp \
    nwid.cpp \
    parents.cpp \
    regist.cpp \
    students.cpp \
    teachers.cpp

HEADERS += \
    assignment.h \
    chatpage.h \
    customtabstyle.h \
    global.h \
    mainwindow.h \
    message.h \
    newmessage.h \
    nwid.h \
    parents.h \
    regist.h \
    students.h \
    teachers.h

FORMS += \
    assignment.ui \
    chatpage.ui \
    mainwindow.ui \
    message.ui \
    newmessage.ui \
    nwid.ui \
    parents.ui \
    regist.ui \
    students.ui \
    teachers.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../../../../../Program Files/MySQL/mysql-8.0.37-winx64/mysql-8.0.37-winx64/data/ca.pem \
    ../../../../../../Program Files/MySQL/mysql-8.0.37-winx64/mysql-8.0.37-winx64/data/client-cert.pem \
    ../../../../../../Program Files/MySQL/mysql-8.0.37-winx64/mysql-8.0.37-winx64/data/client-key.pem

RESOURCES += \
    pdf.qrc \
    ssl.qrc
