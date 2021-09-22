//
//  Outpatient.h
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
