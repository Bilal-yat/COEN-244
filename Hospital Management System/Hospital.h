//
//  Hospital.h
//  Assignment 4
//
//  Created by Bilal Yattou on 2020-03-30.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou  ID: 40110820
// Partner: Matthieu Pourrat ID:40089209
// IDE: Xcode

#include <iostream>
#include "Bed.h"
#include "Inpatient.h"
#include "Outpatient.h"
#include "Doctor.h"
#include "Date.h"
#include "Time.h"
#pragma once

class Hospital
{
private:
    inPatient* inP;
    outPatient* outP;
    Doctor* doctor;
    Bed* bed;
    int numIn;
    int numOut;
    int numBed;
    int numDoc;

public:
    Hospital();

    void newInPatient(const inPatient&);
    void newOutPatient(const outPatient&);
    void printInPatients() const;
    void printOutPatients() const;
    void printDoctors() const;
};
