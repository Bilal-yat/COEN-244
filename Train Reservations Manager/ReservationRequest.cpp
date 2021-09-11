//
//  ReservationRequest.cpp
//  Assgnmt2
//
//  Created by Bilal Yattou on 2020-02-06.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//

//Name: Bilal Yattou ; ID: 40110820
//IDE: Xcode

#include <stdio.h>
#include "ReservationRequest.h"
#include <iostream>
#include <string>
using namespace std;

ReservationRequest::ReservationRequest(){
   
}

void ReservationRequest::setReservationCounter()
{
    counter = 145;
}

ReservationRequest::ReservationRequest(Passenger pass1, int x,int y,int z, int seats1, string depart, string arr){
    
    pass = pass1;
    travelDate.setMonth(x);
    travelDate.setDay(y);
    travelDate.setYear(z);
    numberSeats = seats1;
    start = depart;
    destination = arr;
    
    
}

ReservationRequest::ReservationRequest(const ReservationRequest& anotherReservation){
    
    pass = anotherReservation.pass;
    travelDate = anotherReservation.travelDate;
    numberSeats = anotherReservation.numberSeats;
    start = anotherReservation.start;
    destination = anotherReservation.destination;
    
}

void ReservationRequest::setReservationRequest(Passenger pass1, int x, int y, int z, int seats1, string depart, string arr){
    
    pass = pass1;
   travelDate.setMonth(x);
    travelDate.setDay(y);
    travelDate.setYear(z);
    numberSeats = seats1;
    start = depart;
    destination = arr;
    

    
    requestNumber = counter;
    counter++;

    
}

void ReservationRequest::setNumberSeats(int x){
    
    numberSeats = x;
}

void ReservationRequest::setStart(string depart){
    
    start = depart;
}

void ReservationRequest::setDestination(string arr){
    
    destination = arr;
}

const int ReservationRequest::getNumberSeats(){
    
    return numberSeats;
}

const string ReservationRequest::getStart(){
    
    return start;
}

const string ReservationRequest::getDestination(){
    
    return destination;
}

const int ReservationRequest::getRequestNumber(){
    
    return requestNumber;
}

Date ReservationRequest::getTravelDate(){
    
    return travelDate;
}

    
    int ReservationRequest::counter = 0;


ReservationRequest::~ReservationRequest(){
    
    cout<<"Reservation Request succesfully deleted"<<endl;
}
