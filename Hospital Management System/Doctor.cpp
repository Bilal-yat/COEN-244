#include <stdio.h>
#include "Doctor.h"
#include <iostream>
#include <string>
using namespace std;

int Doctor::licence = 0;

Doctor::Doctor() : Person()
{
    name = " ";
    specialty = " ";
    licenceID = licence;
}

Doctor::Doctor(string a, string b) : Person()
{
    name = a;
    specialty = b;
    licenceID = licence++;
}

Doctor::Doctor(const Doctor& a)
{
    name = a.name;
    specialty = a.specialty;
    licenceID = a.licenceID;
    licence = a.licence;
}
void Doctor::print() const
{
    cout << "Doctor in charge: " << name << endl;
    cout << "Specialty: " << specialty << endl;
    cout << "Licence Number: " << licenceID;
}

void Person::print() const
{
    cout << "Name of patient: " << name << endl;
    cout << "Patient's ID: " << id << endl;
}
