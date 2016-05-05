#ifndef CANVAS_H
#define CANVAS_H

#include <QtWidgets>

class Canvas : public QWidget
{
    Q_OBJECT

    QImage image;
    uint color;

    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
public:
    explicit Canvas(QWidget *parent = 0);
    void loadImage(QString);

signals:

public slots:

};

#endif // CANVAS_H
