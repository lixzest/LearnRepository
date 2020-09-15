#ifndef SENDTHREAD_H
#define SENDTHREAD_H

#include <QThread>

class SendThread : public QThread
{
    Q_OBJECT
public:
    explicit SendThread(QObject *parent = 0);

signals:
    void sendInfo(QString);
public slots:
protected:
    virtual void run();

};

#endif // SENDTHREAD_H
