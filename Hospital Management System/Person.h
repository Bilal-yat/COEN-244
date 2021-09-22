//
//  Person.h
//  Assignment 4
//
//  Created by Bilal Yattou on 2020-03-12.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou  ID: 40110820
// Partner: Matthieu Pourrat ID:40089209
// IDE: Xcode

#include <iostream>
#include <string>
using namespace std;
#pragma once

class Person
{
protected:
    static int identifier;
    string name;
    int id;
public:
    Person();
    Person(string);
    
    void setIdentifier();
    void setName(string);
    string getName() const;
    int getID() const;
    void print() const;
};
