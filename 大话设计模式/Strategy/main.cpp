#include <iostream>
#include "cashcontext.h"

using namespace std;

int main(int argc, char *argv[])
{



    double monney = 300;

    CashContext cashContext(CASHREBATE);
    double result = cashContext.getResult(monney);

    cout << "monneyRebate(0.8): " << monney << endl
         << "monneyRebate: " << result << endl;

    CashContext cs(CASHRETURN);
    cout << "monneyReturn(300 - 100) monney: " << monney << endl
         << "result: " << cs.getResult(monney) << endl;

    return 0;
}
