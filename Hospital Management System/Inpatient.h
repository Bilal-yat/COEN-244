#include "Person.h"
#include "Date.h"
#include "Time.h"
#include <iostream>
#include "Doctor.h"
#include "Bed.h"
#include <string>
#pragma once
using namespace std;

class inPatient : public Person
{
private:
    Date* admissionDate;
    Date* dischargeDate;
    Doctor* doctor;
    Bed* bed;
    double dailyRate;

public:
    inPatient();
    inPatient(const Date&, const Date&, const Doctor&);

    Bed returnBed() const;
    Doctor returnDoctor() const;
    double getPayment() const;
    void print() const;
};
