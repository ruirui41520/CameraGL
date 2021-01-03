QT       -= gui
QT       += multimedia multimediawidgets network opengl

TEMPLATE = lib
CONFIG += shared
CONFIG += c++17

DEFINES += QT_DEPRECATED_WARNINGS


OSFOLDER = msw
CONFIGURATIONFOLDER = Debug

CONFIG(debug,debug|release) {
    DEFINES += DEBUG=1
    CONFIGURATIONFOLDER = Debug
} else {
    CONFIGURATIONFOLDER = Release
}
