#include <iostream>
#pragma once

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time();
    Time(int, int, int);
    Time(const Time&);

    void print() const;
};
