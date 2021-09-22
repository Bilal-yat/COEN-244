#include <stdio.h>
#include "Outpatient.h"
using namespace std;

outPatient::outPatient() : Person()
{
    appointementDate = new Date();
    appointementTime = new Time();
    doctor = new Doctor();
    hospitalCharge = 45.0;
}

outPatient::outPatient(const Date& a, const Time& b, const Doctor& c) : Person()
{
    appointementDate = new Date(a);
    appointementTime = new Time(b);
    doctor = new Doctor(c);
    hospitalCharge = 45.0;
}

Doctor outPatient::returnDoctor() const
{
    return *doctor;
}

void outPatient::print() const
{
    cout << "Name of patient: " << Person::getName() << endl;
    cout << "Patient's ID: " << Person::getID() << endl;
    cout << "Appointement Date: ";
    appointementDate->print();
    cout << endl;
    cout << "Appointement Time: ";
    appointementTime->print();
    cout << endl;
    doctor->print(); //prints the doctor attributes.
    cout << endl;
    cout << "The amount to pay for the appointement is: " << hospitalCharge << endl;
}
