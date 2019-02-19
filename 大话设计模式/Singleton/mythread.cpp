#include "mythread.h"

MyThread::MyThread()
{

}

MyThread::MyThread(QString name):QThread(),mName(name)
{
    qDebug() << mName << " creating...";
}

void MyThread::run()
{

}
