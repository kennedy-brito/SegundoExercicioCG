#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget{parent}
{}

void GLWidget::initializeGL()
{
    glClearColor(0.2f, 0.2f, 0.2f,1.0f);
}

void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(0.0f, 0.5f, 0.0f);

        glColor3f(0.5f, 0.0f, 0.0f);
        glVertex3f(0.5f, -0.5f, 0.0f);

        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(-0.5f, -0.5f, 0.0f);
    glEnd();

}

void GLWidget::resizeGL(int w, int h)
{

}
