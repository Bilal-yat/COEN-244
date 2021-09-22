// IDE: Xcode
#include <iostream>
#include <string>
#pragma once
using namespace std;

class Bed
{
private:
    static int counter;
    int bedNumber;
    bool flag;

public:
    Bed();
    Bed(const Bed&);

    void checkAvalability(int) const;
    int getBedNumber();
    void print() const;
};
