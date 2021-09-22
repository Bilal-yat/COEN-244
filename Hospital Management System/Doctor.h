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
