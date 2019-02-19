#ifndef CASHCONTEXT_H
#define CASHCONTEXT_H
#include "cashsuper.h"

class CashContext
{
private:
    CashSuper *pCashSuper;
public:
    CashContext(CashType type)
    {
        switch(type)
        {
        case CASHNORMAL:
            pCashSuper = new CashNormal();
            break;
        case CASHREBATE:
            pCashSuper = new CashRebate(0.8);
            break;
        case CASHRETURN:
            pCashSuper = new CashReturn(300,100);
            break;
        }
    }

    double getResult(double monney)
    {
        return pCashSuper->acceptCash(monney);
    }
};

#endif // CASHCONTEXT_H
