#include "singleton.h"
#include <QMutex>
#include <QMutexLocker>

QMutex mutex;



Singleton::Singleton()
{

}


Singleton* Singleton::instance = NULL;

Singleton* Singleton::getInstance()
{
    if(instance == NULL)
    {
        QMutexLocker loker(&mutex);
        if(instance == NULL)
        {
            instance = new Singleton;
        }
    }

    return instance;
}
