#ifndef OPERATIONFACTORY_H
#define OPERATIONFACTORY_H

#include "operation.h"
#include "string"
#include "iostream"
using namespace std;

class OperationFactory
{
public:
    static Operation* createOperation(char operate)
    {
        Operation *oper  = NULL;



    //operate必须是常量
        switch (operate) {
        case '+':
            oper = new OperationAdd();
            break;
        case '-':
            oper = new OperationSub();
            break;
        case '*':
            oper = new OperationMul();
            break;
        case '/':
            oper = new OperationDiv();
            break;

        }
        return oper;
    }
};

#endif // OPERATIONFACTORY_H
