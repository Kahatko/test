#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qcustomplot.h>
#include <qmediaplayer.h>
#include <QAudioRecorder>
#include <QAudioInput>
#include <audioinput.h>
#include <audioinpu.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
   QCustomPlot* customPlot;
   QMediaPlayer* player;
   QString  fileName;
   AudioInpu* input;
   QAudioRecorder* audioRecorder;
   QFile outputFile,file;   // class member.
    QAudioInput* audio;
    QAudioFormat m_format;
    QScrollBar *horizontalScrollBar;
public:
    int getFileSize(FILE *inFile);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
