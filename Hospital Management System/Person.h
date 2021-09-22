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
