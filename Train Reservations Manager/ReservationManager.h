//
//  ReservationManager.h
//  Assgnmt2
//
//  Created by Bilal Yattou on 2020-02-09.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//

//Name: Bilal Yattou ; ID: 40110820
//IDE: Xcode

#ifndef ReservationManager_h
#define ReservationManager_h
#include "ReservationRequest.h"
#include <iostream>
using namespace std;

class ReservationManager{
    
private:
    
    Date travel;
    int capacity=12;
    int numberStations = 6;
    int reservationTable[12][6] = {0};
    ReservationRequest requests[5];
    
    
public:
    
                                  /* Constructors */
 
    ReservationManager();
    ReservationManager(Date,ReservationRequest[]);
    ReservationManager(const ReservationManager&);
    
                                /* Setters and getters*/
    
    void setReservationRequestNum(int);
    
                                 /* Member functions*/
    
    void cancelReservation(int);
    void deleteAllReservationRequest(Date);
    void clearOldReservations (Passenger);
    const void printReservationManager();
    const void printReservationData();
    
    //Struggled to implement the above functions 
    
                                  /* Destructor*/
    
    ~ReservationManager();
    
   
};

#endif /* ReservationManager_h */
