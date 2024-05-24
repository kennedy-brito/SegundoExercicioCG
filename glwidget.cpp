#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget{parent}
{
    this->tx = 0.0f;
    this->ty = 0.0f;
    this->sx = 1.0f;
    this->sy = 1.0f;
    this->rz = 0.0f;
}

void GLWidget::initializeGL()
{
    glClearColor(0.2f, 0.2f, 0.2f,1.0f);
}

void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();
    glTranslatef(tx, ty, 0.0f);
    glScalef(sx, sy, 1.0f);
    glRotatef(rz, 0.0f, 0.0f, 1.0f);


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

void GLWidget::translate(float x, float y)
{
    this->tx += x;
    this->ty += y;
    update();
}

void GLWidget::rotate(float z)
{
    this->rz+=z;
    update();
}
