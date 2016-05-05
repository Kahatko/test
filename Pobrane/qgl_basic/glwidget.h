#ifndef QGLIDGET_H
#define QGLIDGET_H

#include <QTimer>
#include <QTime>
#include <QGLWidget>
#include <GL/glu.h>



#define PRINT_GL_ERROR(msg)  { GLenum err; \
                               while( (err=glGetError())!= GL_NO_ERROR ) \
                               { qDebug() << msg << "in line" << __LINE__ << ": "<< (const char*)gluErrorString(err); } }



class GLWidget : public QGLWidget
{
    Q_OBJECT

    QTimer timer;   // wyzwalacz dla kolejnych klatek
    QTime time;     // pomiar czasu
    int fps;        // miara ilosci klatek na sekunde



public:
    explicit GLWidget(QGLWidget *parent = 0);
    
protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent * e);
    void keyPressEvent(QKeyEvent *);

signals:
    
public slots:
    void redraw();
};

#endif // QGLIDGET_H
