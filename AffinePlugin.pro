######################################################################
# Automatically generated by qmake (3.1) Sat Jun 17 20:56:42 2023
######################################################################

TEMPLATE = lib
TARGET = AffinePlugin.pro
CONFIG += plugin
INCLUDEPATH += ../ImageEditor

# You can make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# Please consult the documentation of the deprecated API in order to know
# how to port your code away from it.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += affine_plugin.h
SOURCES += affine_plugin.cpp

unix: mac {
    INCLUDEPATH += /usr/local/include/opencv4
    LIBS += -L/usr/local/lib -lopencv_core -lopencv_imgproc
}
