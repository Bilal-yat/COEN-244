#include <iostream>
#pragma once

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int, int, int);
    Date(const Date&);

    int getDay() const;
    int getMonth() const;
    int getYear() const;



    void print() const;
};
