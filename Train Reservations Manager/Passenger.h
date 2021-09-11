//
//  Passenger.h
//  Assgnmt2
//
//  Created by Bilal Yattou on 2020-01-30.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//

//Name: Bilal Yattou ;
//IDE: Xcode

#ifndef Passenger_h
#define Passenger_h
#include <string>
#include "Date.h"
using namespace std;

class Passenger{
    
private:
    
    string name;
    Date dob;
    int reservationRequestNumber[5]={0};
    const static int max_reservation = 5;
    
public:
                       /* Constructors */
    Passenger();
    Passenger(string,Date, int a[5]);
    Passenger(const Passenger&);
    
                      /* Setters and getters */
    void setPassenger(string,Date, int a[5]);
    void setPassengerMonth(int);
    void setPassengerDay(int);
    void setPassengerYear(int);
    void setName(string);
    const string getName();
    
                     /* Member Functions */
    const void printPassenger();
    
                     /*Destructor*/
    ~Passenger();    
    
};

#endif /* Passenger_h */
