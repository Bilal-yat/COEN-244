//
//  Hospital.cpp
//  Assignment 4
//
//  Created by Bilal Yattou on 2020-03-30.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou  ID: 40110820
// Partner: Matthieu Pourrat ID:40089209
// IDE: Xcode

#include <stdio.h>
#include "Hospital.h"
using namespace std;

Hospital::Hospital()
{
    inP = new inPatient[500];
    outP = new outPatient[500];
    doctor = new Doctor[100];
    bed = new Bed[100];
    numIn = 0;
    numOut = 0;
    numBed = 0;
    numDoc = 0;
}

void Hospital::newInPatient(const inPatient& a)
{
    if (numIn < 500)
    {
        inP[numIn] = a;
        doctor[numDoc] = a.returnDoctor();
        bed[numBed] = a.returnBed();
        numIn++;
        numDoc++;
        numBed++;
    }
    else
        cout << "No more space." << endl;
}

void Hospital::newOutPatient(const outPatient& a)
{
    if (numIn < 500)
    {
        outP[numOut] = a;
        doctor[numDoc] = a.returnDoctor();
        numOut++;
        numDoc++;
    }
    else
        cout << "No more space." << endl;

}

void Hospital::printInPatients() const
{
    for (int i = 0; i < numIn; i++)
    {
        cout << endl;
        inP[i].print();
        cout << endl;
    }
}

void Hospital::printOutPatients() const
{
    for (int i = 0; i < numOut; i++)
    {
        cout << endl;
        outP[i].print();
        cout << endl;
    }
}

void Hospital::printDoctors() const
{
    for (int i = 0; i < numDoc; i++)
    {
        cout << endl;
        doctor[i].print();
        cout << endl;
    }
}
