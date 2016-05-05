#ifndef EMGG_H
#define EMGG_H

#include <QWidget>
#include <qcustomplot.h>

namespace Ui {
class Emgg;
}

class Emgg : public QWidget
{
    Q_OBJECT
QCustomPlot* customPlott;
public:
    explicit Emgg(QWidget *parent = 0);
    ~Emgg();

private:
    Ui::Emgg *ui;
};

#endif // EMGG_H
