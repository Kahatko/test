#ifndef AUDIOINPU_H
#define AUDIOINPU_H

#include <QWidget>
#include <QFile>
#include <QAudioInput>
#include <QTimer>

class AudioInpu : public QWidget
{
    Q_OBJECT
    QFile output;


public:
    explicit AudioInpu(QWidget *parent = 0);
    void setup();
    //AudioInput();
    void costam();
private:
   QAudioInput* audio;

signals:

public slots:
  void terminateRecording();
};

#endif // AUDIOINPU_H
