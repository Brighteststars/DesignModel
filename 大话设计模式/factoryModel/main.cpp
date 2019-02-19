#include <iostream>
#include "operationfactory.h"

using namespace std;

bool func(int n)
{
    if((n!= 1 && n%2 == 1) || n == 0)
        return false;
    if(n == 2 || n == 1)
        return true;

    return func(n/2);
}

int main(int argc, char *argv[])
{

    cout << "2^n of 0-100 is: " << endl;
    for(int i = 0;i < 100;i++)
    {
        if(func(i))
            cout << i << " ";
    }




    return 0;
}
