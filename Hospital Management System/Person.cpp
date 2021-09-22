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
