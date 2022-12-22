TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += calculator.cpp

include(deployment.pri)
qtcAddDeployment()

