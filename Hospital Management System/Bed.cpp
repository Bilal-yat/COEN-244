#include <stdio.h>
#include "Bed.h"
using namespace std;

int Bed::counter = 0;

Bed::Bed()
{
    bedNumber = counter;
    flag = true;

}

Bed::Bed(const Bed& a)
{
    flag = a.flag;
    bedNumber = a.bedNumber;
    counter = a.counter;
    counter++;
}

void Bed::checkAvalability(int a) const
{
    if (flag == false)
    {
        cout << "Bed number: " << a << " is not available." << endl;
    }
    else
    {
        cout << "The Bed number: " << a << " is available." << endl;
    }
}

void Bed::print() const
{
    cout << "Patient assigned to bed number: " << bedNumber;
}
