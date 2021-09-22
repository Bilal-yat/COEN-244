//
//  Person.cpp
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
#include <stdio.h>
#include "Person.h"
using namespace std;

int Person::identifier= 0;

void Person::setIdentifier(){
    
    identifier = identifier +1;
    id = identifier;
}

Person::Person()
{
    name = " ";
    setIdentifier();
}

Person::Person(string a)
{
    name = a;
    setIdentifier();
}

void Person::setName(string a)
{
    name = a;
}

string Person::getName() const
{
    return name;
}

int Person::getID() const
{
    return id;
}
