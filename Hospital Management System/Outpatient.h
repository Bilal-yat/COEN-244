#include "Person.h"
#include "Date.h"
#include <iostream>
#include <string>
#include "Doctor.h"
#include "Time.h"
#pragma once
using namespace std;

class outPatient : public Person
{
private:
    Date* appointementDate;
    Time* appointementTime;
    double hospitalCharge;
    Doctor* doctor;

public:
    outPatient();
    outPatient(const Date&, const Time&, const Doctor&);

    Doctor returnDoctor() const;
    void print() const;
};
