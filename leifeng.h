#ifndef LEIFENG_H
#define LEIFENG_H

#include "iostream"
using namespace std;

//抽象产品类
class LeiFeng
{
public:
    virtual void Sweep()
    {
        cout << "扫地" << endl;
    }

    virtual void Wash()
    {
        cout << "洗衣" << endl;
    }

    virtual void BuyRice()
    {
        cout << "买米" << endl;
    }
};


//具体产品类
class Undergraduate:public LeiFeng
{
public:
    void Sweep()
    {
        cout << "学生-扫地" << endl;
    }

    void Wash()
    {
        cout << "学生-洗衣" << endl;
    }

    void BuyRice()
    {
        cout << "学生-买米" << endl;
    }
};


class Volunteer:public LeiFeng
{
public:
    void Sweep()
    {
        cout << "志愿者-扫地" << endl;
    }

    void Wash()
    {
        cout << "志愿者-洗衣" << endl;
    }

    void BuyRice()
    {
        cout << "志愿者-买米" << endl;
    }
};

//抽象工厂类
class AbstractFactory
{
public:
    virtual LeiFeng* createLeiFeng()
    {
        return new LeiFeng;
    }
};

class UndergraduateFactory:public AbstractFactory
{
public:
    Undergraduate* createLeiFeng()
    {
        return new Undergraduate;
    }
};

class VolunteerFactory:public AbstractFactory
{
public:
    Volunteer* createLeiFeng()
    {
        return new Volunteer;
    }

};

#endif // LEIFENG_H
