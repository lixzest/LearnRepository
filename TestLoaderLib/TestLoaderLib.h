#ifndef TESTLOADERLIB_H
#define TESTLOADERLIB_H

#include "testloaderlib_global.h"
#include <QDebug>
#include "SendThread.h"
class TESTLOADERLIBSHARED_EXPORT TestLoaderLib : public QObject
{
    Q_OBJECT
public:
    TestLoaderLib();
    QString Test(QString str);
signals:
    void sendInfo(QString str);
public slots:
    virtual void getInfo(QString info);
private:
    SendThread *mSendThread;
};

#endif // TESTLOADERLIB_H
