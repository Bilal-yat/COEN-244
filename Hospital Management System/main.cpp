//
//  main.cpp
//  Assignment 4
//
//  Created by Bilal Yattou on 2020-03-12.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou  ID: 40110820
// Partner: Matthieu Pourrat ID:40089209
// IDE: Xcode

#include <iostream>
#include <string>
#include "Hospital.h"
#include <iomanip>

using namespace std;

int main()
{
    Hospital hospital;
    int button = 0;

    cout << "---------------------------------------------------------------------" << endl;
    cout << setw(50) << "Hospital Management System" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << endl;
    cout << endl;
   
    for (int i = 0; i < 1000; i++)
    {
        cout << "----------------------------------------------" << endl;
        cout << "Choose an option bellow: " << endl;
        cout << "Press 1 to add an In Patient." << endl;
        cout << "Press 2 to add an Out Patient." << endl;
        cout << "Press 3 to list all In Patients." << endl;
        cout << "Press 4 to list all Out Patients." << endl;
        cout << "Press 5 to list all doctors." << endl;
        cout << "Press 6 to leave the program." << endl;
        cout << "---------------------------------------------" << endl;
        cout  << setw(21) << "Choice: ";
        cin >> button;
        cin.ignore();
        if (!cin){
            exit(0);
        }
        if (button == 1)
        {
            cout << endl << endl;
            int day = 0, month = 0, year = 0;
            string namePatient;
            cout << "Please enter the name: ";
            getline(cin,namePatient);
            cout<<endl;
            cout << "Enter the day of admission: ";
            cin>>day;
            cin.ignore();
            cout << "Enter the month: ";
            cin >> month;
            cin.ignore();
            cout << "Enter the year: ";
            cin >> year;
            cin.ignore();
            Date admissionDate(day, month, year);
            cout << "Enter the day of release: ";
            cin >> day;
            cin.ignore();
            cout << "Enter the month: ";
            cin >> month;
            cin.ignore();
            cout << "Enter the year: ";
            cin >> year;
            cin.ignore();
            Date dischargeDate(day, month, year);
            string name, specialty;
            cout << "Enter the doctor's name: ";
            getline(cin,name);
            cout << "Enter the doctor's specialty: ";
            getline(cin,specialty);
            Doctor doctor(name, specialty);
            Bed bed;
            inPatient patient(admissionDate, dischargeDate, doctor);
            patient.setName(namePatient);
            hospital.newInPatient(patient);
            cout << endl;
        }
        else if (button == 2)
        {
            cout << endl << endl;
            int day = 0, month = 0, year = 0, hours = 0, minutes = 0;
            string namePatient;
            cout << "Please enter the name: ";
            getline(cin,namePatient);
            cout << "Enter the day of the appointement: ";
            cin >> day;
            cin.ignore();
            cout << "Enter the month: ";
            cin >> month;
            cin.ignore();
            cout << "Enter the year: ";
            cin >> year;
            cin.ignore();
            Date appointementDate(day, month, year);
            cout << "Enter the hours of your appointement: ";
            cin >> hours;
            cin.ignore();
            cout << "Enter the minutes of your appointement: ";
            cin >> minutes;
            cin.ignore();
            Time appointementTime(hours, minutes, 0);
            string name, specialty;
            cout << "Enter the doctor's name: ";
            getline(cin,name);
            cout << "Enter the doctor's specialty: ";
            getline(cin,specialty);
            Doctor doctor(name, specialty);
            outPatient patient(appointementDate, appointementTime, doctor);
            patient.setName(namePatient);
            hospital.newOutPatient(patient);
            cout << endl;
        }
        else if (button == 3)
        {
            hospital.printInPatients();
        }
        else if (button == 4)
        {
            hospital.printOutPatients();
        }
        else if (button == 5)
        {
            hospital.printDoctors();
        }
        else if (button == 6)
        {
            exit(0);
        }
        else
        {
            cout << "You antered an invalid command. Please try again." << endl;
        }
    }
}
