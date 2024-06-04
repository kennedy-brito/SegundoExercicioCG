#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget{parent}
{
    this->tx = 0.0f;
    this->ty = 0.0f;
    this->sx = 1.0f;
    this->sy = 1.0f;
    this->rz = 0.0f;
    this->rx = 0.0f;
    this->ry = 0.0f;
}

void GLWidget::initializeGL()
{
    glClearColor(0.2f, 0.2f, 0.2f,1.0f);//limpa as cores
    glEnable(GL_DEPTH_TEST);//ativa profundidade
    glEnable(GL_CULL_FACE);//ativa o corte de faces não visualizaveis
    glCullFace(GL_BACK);
    glEnable(GL_LIGHTING);//ativa luz
    glEnable(GL_LIGHT0);//ativa a primeira fonte de luz
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);

}

void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();

    glTranslatef(tx, ty, 0.0f);
    glScalef(sx, sy, 1.0f);
    glRotatef(rz, 0.0f, 0.0f, 1.0f);
    glRotatef(ry, 0.0f, 1.0f, 0.0f);
    glRotatef(rx, 1.0f, 0.0f, 0.0f);


    glBegin(GL_QUADS);

        //FACE FRONTAL
        glColor3f(1.0f, 0.0f, 0.0f);    
        glVertex3f(-0.5f, -0.5f, 0.5f);
        glVertex3f( 0.5f, -0.5f, 0.5f);
        glVertex3f( 0.5f,  0.5f, 0.5f);
        glVertex3f(-0.5f,  0.5f, 0.5f);

        //FACE TRASEIRA
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-0.5f, -0.5f, -0.5f);
        glVertex3f(-0.5f,  0.5f, -0.5f);
        glVertex3f( 0.5f,  0.5f, -0.5f);
        glVertex3f( 0.5f, -0.5f, -0.5f);

        //FACE ESQUERDA
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f( -0.5f, -0.5f, -0.5f);
        glVertex3f( -0.5f, -0.5f, 0.5f);
        glVertex3f( -0.5f, 0.5f, 0.5f);
        glVertex3f( -0.5f, 0.5f, -0.5f);

        //FACE DIREITA
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex3f( 0.5f, -0.5f, -0.5f);
        glVertex3f( 0.5f, 0.5f, -0.5f);
        glVertex3f( 0.5f, 0.5f, 0.5f);
        glVertex3f( 0.5f, -0.5f, 0.5f);

        //FACE INFERIOR
        glColor3f(1.0f, .0f, 1.0f);
        glVertex3f( -0.5f, -0.5f, -0.5f);
        glVertex3f( 0.5f, -0.5f, -0.5f);
        glVertex3f( 0.5f, -0.5f, 0.5f);
        glVertex3f( -0.5f, -0.5f, 0.5f);

        //FACE SUPERIOR
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3f( -0.5f, 0.5f, -0.5f);
        glVertex3f( -0.5f, 0.5f, 0.5f);
        glVertex3f( 0.5f, 0.5f, 0.5f);
        glVertex3f( 0.5f, 0.5f, -0.5f);



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

void GLWidget::rotateX(float x)
{
    this->rx+=x;
    update();
}

void GLWidget::rotateY(float y)
{
    this->ry+=y;
    update();
}

void GLWidget::scale(float x, float y)
{
    this->sx += x;
    this->sy += y;
    update();
}

void GLWidget::reset()
{
    this->tx = 0.0f;
    this->ty = 0.0f;
    this->sx = 1.0f;
    this->sy = 1.0f;
    this->rz = 0.0f;
    this->rx = 0.0f;
    this->ry = 0.0f;
    update();
}
