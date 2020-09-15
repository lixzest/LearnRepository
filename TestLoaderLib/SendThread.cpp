#include "SendThread.h"
#include <QDebug>
SendThread::SendThread(QObject *parent) :
    QThread(parent)
{
}

void SendThread::run()
{
    while(true){
        sleep(5);
        qDebug() << "sendthread";
        QString info = "hi app!";
        emit sendInfo(info);
    }

}
