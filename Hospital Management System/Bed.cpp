//
//  Bed.cpp
//  Assignment 4
//
//  Created by Bilal Yattou on 2020-03-30.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou  ID: 40110820
// Partner: Matthieu Pourrat ID:40089209
// IDE: Xcode

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
