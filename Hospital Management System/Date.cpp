#include <stdio.h>
#include "Date.h"
#include <iostream>
using namespace std;


Date::Date()
{
    day = 0;
    month = 0;
    year = 0;
}


Date::Date(int a, int b, int c)
{
     if(b>=1 && b<=12){
           
            month = b;
        }
     else {
         cout<<"Invalid month, default value used"<<endl;
         month = 1;
     }
        
        if(a>=1 && a<=31){
           
            day = a;
        }
        else {
            cout<<"Invalid day, default value used"<<endl;
            day = 1;
        }
       
       if(c>=0){
           
           year = c;
       }
       else{
           cout<<"Invalid input, default value used"<<endl;
           year = 1;
       }
}

Date::Date(const Date& a)
{
    day = a.day;
    month = a.month;
    year = a.year;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const
{
    return month;
}

int Date::getYear() const
{
    return year;
}

void Date::print() const
{
    cout << day << "/" << month << "/" << year;
}
