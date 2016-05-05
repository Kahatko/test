#ifndef EMG_H
#define EMG_H

#include <QDialog>
#include <qcustomplot.h>
#include <QMainWindow>
#include <QLabel>

namespace Ui {
class Emg;
}

class Emg : public QDialog
{
    Q_OBJECT
    QCustomPlot* customPlott;
    QVector<double> FirstTime;
     QVector<double> SecondRTABDUCTPoluV;
     QVector<double> ThirdRTMEDTRICEPSuV;
     QVector<double> FourthRTLATTRICEPSuV;
     QVector<double> FifthRTBICEPSBruV;
     QVector<double> SixthBICEPSCBuV;
     QVector<double> SeventhRTABDUCTPoluV;
    QString  fileName;
    QLabel FileType;
public:
    explicit Emg(QWidget *parent = 0);
    ~Emg();

private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::Emg *ui;
};

#endif // EMG_H
