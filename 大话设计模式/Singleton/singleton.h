#ifndef SINGLETON_H
#define SINGLETON_H


class Singleton
{
private:
    Singleton();
    static Singleton* instance;
public:

    static Singleton* getInstance();

};

#endif // SINGLETON_H
