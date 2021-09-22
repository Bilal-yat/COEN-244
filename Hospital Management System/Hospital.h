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
