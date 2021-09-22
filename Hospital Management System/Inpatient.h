//
//  Inpatient.h
//  Assignment 4
//
//  Created by Bilal Yattou on 2020-03-30.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou  ID: 40110820
// Partner: Matthieu Pourrat ID:40089209
// IDE: Xcode

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
