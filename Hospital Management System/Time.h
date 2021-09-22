//
//  Time.h
//  Assignment 4
//
//  Created by Bilal Yattou on 2020-03-29.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou  ID: 40110820
// Partner: Matthieu Pourrat ID:40089209
// IDE: Xcode

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
