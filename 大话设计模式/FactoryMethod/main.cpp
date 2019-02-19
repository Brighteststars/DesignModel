#include <iostream>
#include "leifeng.h"
using namespace std;


int main(int argc, char *argv[])
{
    AbstractFactory* fac = new VolunteerFactory;
    LeiFeng* person = fac->createLeiFeng();

    person->Wash();
    person->Sweep();
    person->BuyRice();

    if(person)
    {
        delete person;
        person = NULL;
    }


    return 0;
}
