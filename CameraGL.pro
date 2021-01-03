TEMPLATE = subdirs

SUBDIRS = \
    libCameraDeskTop \
    libGLDemo \
    App

libCameraDeskTop.subdir   = CameraDeskTop
libGLDemo.subdir = GLDemo
App.depends = libCameraDeskTop
App.depends = libGLDemo
