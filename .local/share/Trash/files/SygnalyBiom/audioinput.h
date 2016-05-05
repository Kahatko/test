#ifndef AUDIOINPUT_H
#define AUDIOINPUT_H
#include <qmediaplayer.h>
#include <QAudioRecorder>
#include <QAudioInput>
#include <QFile>
#include <QTimer>

class AudioInput: public QObject
{
    Q_OBJECT
    QFile output;

    void setup();
    AudioInput();
    void costam();
private:
   QAudioInput *audio;

signals:

public slots:
  void terminateRecording();






};

#endif // AUDIOINPUT_H
