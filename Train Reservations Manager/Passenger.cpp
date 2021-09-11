//
//  Passenger.cpp
//  Assgnmt2
//
//  Created by Bilal Yattou on 2020-01-30.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//

//Name: Bilal Yattou ; ID: 40110820
//IDE: Xcode

#include <stdio.h>
#include "Passenger.h"
#include <iostream>
#include <string>
using namespace std;

Passenger::Passenger(){ //Default constructor
    
}


Passenger::Passenger(string aName, Date aDob, int r[]){ // Regular constructor
    
    name = aName;
    dob.setMonth(aDob.getMonth());
    dob.setDay(aDob.getDay());
    dob.setYear(aDob.getYear());
    
   for(int i = 0; i<5; i++)
    {
        reservationRequestNumber[i]=r[i];
    }
}


Passenger::Passenger(const Passenger& anotherPassenger){ // Copy constructor
    
    name = anotherPassenger.name;
    dob = anotherPassenger.dob;
}

void Passenger::setPassengerMonth(int x){
    
    dob.setMonth(x);
    
}
void Passenger::setPassengerDay(int y){
    
    dob.setDay(y);
    
}
void Passenger::setPassengerYear(int z){
    
    dob.setYear(z);
    
}

void Passenger::setPassenger(string aName, Date aDob, int r[]){
    
    name = aName;
    dob.setMonth(aDob.getMonth());
    dob.setDay(aDob.getDay());
    dob.setYear(aDob.getYear());
        
    for(int i = 0; i<5; i++)
    {
        reservationRequestNumber[i]=r[i];
    }
}

void Passenger::setName(string aName){
    
    name = aName;
}


const string Passenger::getName(){
    
    return name;
    
}



const void Passenger::printPassenger(){
    
    cout<<name<<endl;
    dob.printDate();
}


Passenger::~Passenger(){
    
    cout<<"Passenger succesfully deleted"<<endl;
}
