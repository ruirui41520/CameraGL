#include "uiglwidget.h"


UIGlWidget::UIGlWidget(QWidget *parent):QOpenGLWidget(parent)
{

}

UIGlWidget::~UIGlWidget()
{

}

void UIGlWidget::initializeGL()
{

}

void UIGlWidget::resizeGL(int w, int h)
{
    glViewport(0,0,w,h);
}

void UIGlWidget::paintGL()
{

}
