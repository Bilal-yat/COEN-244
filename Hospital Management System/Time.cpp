#include <stdio.h>
#include "Time.h"
#include <iostream>
using namespace std;

Time::Time()
{
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int a, int b, int c)
{
    if(a>=0 && a<24){
    hours = a;
    }
    else {
        cout<<"Invalid hour, default value used"<<endl;
        hours = 0;
    }
    if (b>=0 && b<60){
    minutes = b;
    }
    else {
        cout<<"Invalid minute, default value used"<<endl;
        minutes = 0;
    }
    if (c>=0 && c<60){
    seconds = c;
    }
}

Time::Time(const Time& a)
{
    minutes = a.minutes;
    hours = a.hours;
    seconds = a.seconds;
}

void Time::print() const
{
    cout << hours << ":" << minutes<<":"<<seconds<<endl;
}
