#-------------------------------------------------
#
# Project created by QtCreator 2014-05-22T10:56:09
#colorwheel是色盘窗口
#coodinatetranslate是坐标变换 切换 显示
#eventlabel继承QLabel，追踪显示鼠标的坐标
#gredientwidget辐射渐变
#linegredient线性渐变
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QPainterGradient
TEMPLATE = app


SOURCES += main.cpp\
        gredientwidget.cpp \
    linegredient.cpp \
    colorwheel.cpp \
    coodinatetranslate.cpp \
    eventlabel.cpp

HEADERS  += gredientwidget.h \
    linegredient.h \
    colorwheel.h \
    coodinatetranslate.h \
    eventlabel.h

FORMS +=
