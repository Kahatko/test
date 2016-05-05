#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>

class Canvas;

class Widget : public QWidget
{
    Q_OBJECT

    QPushButton *loadButton;
    QVBoxLayout *mainLayout;

    Canvas *canvas;
private slots:
    void loadImage();

public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
