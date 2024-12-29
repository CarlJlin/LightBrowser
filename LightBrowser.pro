TEMPLATE = app
TARGET = LightBrowser
QT += core gui widgets webenginewidgets
CONFIG += c++17

HEADERS += \
    include/BrowserWindow.h \
    include/ReaderMode.h \
    include/DownloadManager.h \
    include/AIAssistant.h \
    include/DarkMode.h

SOURCES += \
    src/main.cpp \
    src/BrowserWindow.cpp \
    src/ReaderMode.cpp \
    src/DownloadManager.cpp \
    src/AIAssistant.cpp \
    src/DarkMode.cpp

RESOURCES += resources/styles.qss
INCLUDEPATH += include
