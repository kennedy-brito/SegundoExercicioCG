#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QOpenGLWidget>

class GLWidget : public QOpenGLWidget
{
public:
    explicit GLWidget(QWidget *parent = 0);

    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

    //definidores
    void translate(float x, float y);
    void rotate(float z);
    void rotateX(float x);
    void rotateY(float y);
    void scale(float x, float y);
    void reset();

private:
    float tx,ty;
    float rz, rx, ry;
    float sx, sy;
};



#endif // GLWIDGET_H
