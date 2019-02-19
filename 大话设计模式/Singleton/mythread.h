#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QDebug>


class MyThread:public QThread
{
private:
    QString mName;
public:
    MyThread();
    MyThread(QString name);

    void run();





};

#endif // MYTHREAD_H
