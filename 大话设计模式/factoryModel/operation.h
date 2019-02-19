#ifndef OPERATION_H
#define OPERATION_H



//运算类
class Operation
{
public:

    virtual double getResult() = 0;

    double getNumberA() const {return m_NumberA;}
    double getNumberB() const {return m_NumberB;}

    void setNumberA(double num) { m_NumberA = num;}
    void setNumberB(double num) { m_NumberB = num;}


private:
    double m_NumberA;
    double m_NumberB;
};


//加法类
class OperationAdd: public Operation
{
public:
    double getResult()
    {
        return getNumberA() + getNumberB();
    }


};


//减法类
class OperationSub: public Operation
{
public:
    double getResult()
    {
        return getNumberA() - getNumberB();
    }
};

//乘法类
class OperationMul: public Operation
{
public:
    double getResult()
    {
        return getNumberA() * getNumberB();
    }
};

//除法类
class OperationDiv: public Operation
{
public:
    double getResult()
    {
        if(getNumberB() == 0)
        {
            throw new std::exception("除数不能为零"); //exception在std命名空间中
        }
        else{
            return getNumberA()/getNumberB();
        }
    }
};

#endif // OPERATION_H
