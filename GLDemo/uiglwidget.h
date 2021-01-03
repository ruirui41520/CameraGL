#ifndef UIGLWIDGET_H
#define UIGLWIDGET_H
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLWidget>
#include <QGLShaderProgram>
#include <QScopedPointer>



class UIGlWidget: public QOpenGLWidget,protected QOpenGLFunctions_3_3_Core
{
public:
    UIGlWidget(QWidget *parent = nullptr);
    ~UIGlWidget();

    // QOpenGLWidget interface
protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

private:
    QScopedPointer<QGLShaderProgram> m_program;
    GLuint m_vao,m_vbo,m_input_texture;


};

#endif // UIGLWIDGET_H
