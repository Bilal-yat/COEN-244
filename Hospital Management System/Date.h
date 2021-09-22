//
//  Date.h
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
