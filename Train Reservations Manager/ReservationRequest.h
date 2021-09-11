//
//  ReservationRequest.h
//  Assgnmt2
//
//  Created by Bilal Yattou on 2020-02-06.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//

//Name: Bilal Yattou ;
//IDE: Xcode

#ifndef ReservationRequest_h
#define ReservationRequest_h
#include <iostream>
#include <string>
#include "Passenger.h"
using namespace std;

class ReservationRequest{
    
private:
    
    Passenger pass;
    static int counter;
    int requestNumber;
    Date travelDate;
    int numberSeats;
    string start;
    string destination;
    
public:
    
                           /* Constructors*/
    ReservationRequest();
    ReservationRequest(Passenger,int,int,int, int, string, string);
    ReservationRequest(const ReservationRequest&);
                          
                           /* Setters & Getters*/
    void setReservationRequest(Passenger,int, int, int,int,string,string);
    void setNumberSeats(int);
    void setStart(string);
    void setDestination(string);
   void setReservationCounter();

    const int getNumberSeats();
    const string getStart();
    const string getDestination();
    const int getRequestNumber();
    Date getTravelDate();
                            /* Member Functions*/
    
    const void printReservationRequest();
    
                           /* Destructor*/
    
    ~ReservationRequest();
};

#endif /* ReservationRequest_h */
