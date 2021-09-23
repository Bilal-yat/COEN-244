#include <stdio.h>
#include "Inpatient.h"
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

inPatient::inPatient() : Person()
{
    admissionDate = new Date();
    dischargeDate = new Date();
    doctor = new Doctor();
    bed = new Bed();
    dailyRate = 100.0;
}

inPatient::inPatient(const Date& a, const Date& b, const Doctor& c) : Person()
{
    admissionDate = new Date(a);
    dischargeDate = new Date(b);
    doctor = new Doctor(c);
    bed = new Bed();
    dailyRate = 100.0;
}

double inPatient::getPayment() const //algorith to calculate the number of days between two givin dates.
{
    int totalCharge = 0;
    int days = 0;
    int months = 0;
    int years = 0;
    
    
    years = (dischargeDate->getYear()) - (admissionDate->getYear());
    months = abs((dischargeDate->getMonth()) - (admissionDate->getMonth()));
    days = abs((dischargeDate->getDay()) - (admissionDate->getDay()));
    
    if (years == 0){
        if(months == 0){
            totalCharge = days*dailyRate;
        }
        else {
            totalCharge = ((months*30)+(days)) * dailyRate;
        }
    }
    else if (years > 0 && years!=0){
        if(months == 0){
            totalCharge = ((years*365)+days) * dailyRate;
        }
        else {
            totalCharge = ((years*365)+(months*30)+days) * dailyRate;
        }
    }
    else {
        cout<<"Error: Negative Year! Please Enter a Valid Discharge date";
    }
    
    return totalCharge;
}

Bed inPatient::returnBed() const
{
    return *bed;
}

Doctor inPatient::returnDoctor() const
{
    return *doctor;
}

void inPatient::print() const
{
    cout << "Name of patient: " << Person::getName() << endl;
    cout << "Patient's ID: " << Person::getID() << endl;
    cout << "Admission Date: ";
    admissionDate->print();
    cout << endl;
    cout << "Discharge Date: ";
    dischargeDate->print();
    cout << endl;
    doctor->print(); //prints the doctor attributes.
    cout << endl;
    bed->print(); //prints bed number
    cout << endl;
    cout << "The amount to pay for the stay is: ";
    cout << this->getPayment();
    cout << endl;
}
