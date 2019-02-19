#include "iostream"
#include "Prototype.h"

using namespace std;

int main()
{
    cout << "hello world\n" << endl;


    Resume resume("ÂÞ³É");
    resume.SetPersonalInfo("ÄÐ", "19");
    resume.SetWorkExperience("2003-2009", "Î¢Èí");

    resume.Display();




    return 0;
}
