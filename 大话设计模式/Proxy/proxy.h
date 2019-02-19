#ifndef PROXY_H
#define PROXY_H
#include "string"
#include "iostream"
using namespace std;


class SchoolGirl
{
private:
    string name;

public:
    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }


};

//抽象类Subject
class IGiveGift
{
public:
    virtual void giveDolls() = 0;
    virtual void giveFlowers() = 0;
    virtual void giveCholocate() = 0;
};


//追求者类concreteSubject
class Pursuit: IGiveGift
{
private:
    SchoolGirl* mm;

public:
    Pursuit(SchoolGirl* mm):mm(mm){}

    void giveDolls()
    {
        cout << mm->getName() << " 送你洋娃娃" << endl;
    }

    void giveFlowers()
    {
        cout << mm->getName() << " 送你鲜花" << endl;
    }

    void giveCholocate()
    {
        cout << mm->getName() << " 送你巧克力" << endl;
    }

};

//代理类
class Proxy: IGiveGift
{
private:
    Pursuit* gg;

public:


    Proxy(SchoolGirl* mm)
    {
        gg = new Pursuit(mm);
    }

    void giveDolls()
    {
        gg->giveDolls();
    }

    void giveFlowers()
    {
        gg->giveFlowers();
    }

    void giveCholocate()
    {
        gg->giveCholocate();
    }


};

#endif // PROXY_H
