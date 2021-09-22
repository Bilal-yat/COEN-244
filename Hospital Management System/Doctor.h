//
//  Doctor.h
//  Assignment 4
//
//  Created by Bilal Yattou on 2020-03-30.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou  ID: 40110820
// Partner: Matthieu Pourrat ID:40089209
// IDE: Xcode

#include "Person.h"
#include <string>
#include <iostream>
#pragma once

using namespace std;

class Doctor : public Person
{
private:
    static int licence;
    int licenceID;
    string name;
    string specialty;

public:
    Doctor();
    Doctor(string, string);
    Doctor(const Doctor&);
    void print() const;
};
