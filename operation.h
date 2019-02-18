#ifndef OPERATION_H
#define OPERATION_H

#include "iostream"

class Operation
{
private:
    double numberA;
    double numberB;
public:
    void setNumA(double numA)
    {
        numberA = numA;
    }

    void setNumB(double numB)
    {
        numberB = numB;
    }

    double getNumA()
    {
        return numberA;
    }

    double getNumB()
    {
        return numberB;
    }

    virtual double getResult() = 0;
};


class AddOperation:public Operation
{
public:
    double getResult()
    {
        double result = 0;
        result = numberA + numberB;
        return result;
    }
};

class SubOperation:public Operation
{
public:
    double getResult()
    {
        double result = 0;
        result = numberA - numberB;
        return result;
    }
};


class MulOperation:public Operation
{
public:
    double getResult()
    {
        double result = 0;
        result = numberA*numberB;
        return result;
    }
};


class DivOperation:public Operation
{
public:
    double getResult()
    {
        double result = 0;
        if(numberB == 0)
            throw new std::exception("除数不能为0");
        result = numberA/numberB;
        return result;
    }
};

//抽象工厂类
class AbstractFactory
{
public:
    virtual Operation* createOperation()
    {
        return new Operation;
    }
};


class AddFactory:public AbstractFactory
{
public:
    Operation* createOperation()
    {
        Operation* oper = new AddOperation;
        return oper;
    }
};

class SubFactory:public AbstractFactory
{
public:
    Operation* createOperation()
    {
        Operation* oper = new SubOperation;
        return oper;
    }
};

class MulFactory:public AbstractFactory
{
public:
    Operation* createOperation()
    {
        Operation* oper = new MulOperation;
        return oper;
    }
};

class DivFactory:public AbstractFactory
{
public:
    Operation* createOperation()
    {
        Operation* oper = new DivOperation;
        return oper;
    }
};

#endif // OPERATION_H
