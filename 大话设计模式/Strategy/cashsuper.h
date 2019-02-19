#ifndef CASHSUPER_H
#define CASHSUPER_H



enum CashType{CASHNORMAL,CASHREBATE,CASHRETURN};


//抽象类
class CashSuper
{
public:

    virtual double acceptCash(double monney) = 0;


};

//正常收费
class CashNormal: public CashSuper
{
public:
    double acceptCash(double monney)
    {
        return monney;
    }
};

//打折类
class CashRebate: public CashSuper
{
private:
    double monneyRebate = 1;
public:
    CashRebate(double rebate):monneyRebate(rebate){}

    void setRebate(double rebate){monneyRebate = rebate;}

    double acceptCash(double monney)
    {
        return monney*monneyRebate;
    }

};

//折返类
class CashReturn: public CashSuper
{
private:
    double monneyCondition = 0;
    double monneyReturn = 0;
public:
    CashReturn(double conMonney,double retMonney)
        :monneyCondition(conMonney),monneyReturn(retMonney){}
    void setData(double conMonney,double retMonney)
    {
        monneyCondition = conMonney;
        monneyReturn = retMonney;
    }

    double acceptCash(double monney)
    {
        double result = monney;

        if(monney >= monneyCondition)
        {
            result = monney - ((int)(monney/monneyCondition)) * monneyReturn;
        }

        return result;
    }
};

#endif // CASHSUPER_H
