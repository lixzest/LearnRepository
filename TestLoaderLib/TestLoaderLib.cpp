#include "TestLoaderLib.h"


TestLoaderLib::TestLoaderLib()
{
    mSendThread = new SendThread;
    mSendThread->start();
    qDebug() << "start thread";
    connect(mSendThread,SIGNAL(sendInfo(QString)),this,SLOT(getInfo(QString)));
}

QString TestLoaderLib::Test(QString str)
{
//    mSendThread->write(str);
    qDebug() << str;
    return str;
}

void TestLoaderLib::getInfo(QString info)
{
    qDebug() << info;
    emit sendInfo(info);
}
