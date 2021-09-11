//
//  main.cpp
//  Assgnmt2
//
//  Created by Bilal Yattou on 2020-01-30.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//

//Name: Bilal Yattou ;
//IDE: Xcode

#include <iostream>
#include "ReservationManager.h"
using namespace std;

int main() {

        Passenger traveller[6];
            ReservationRequest res[6];
        
            res[0].setReservationCounter();
            traveller[0].setName("John");
            traveller[0].setPassengerMonth(1);
            traveller[0].setPassengerDay(1);
            traveller[0].setPassengerYear(1999);
            res[0].setReservationRequest(traveller[0], 4, 26, 2020,1, "Montreal", "Brockville");
            
            traveller[1].setName("Amie");
            traveller[1].setPassengerMonth(2);
            traveller[1].setPassengerDay(2);
            traveller[1].setPassengerYear(1995);
            res[1].setReservationRequest(traveller[1], 4, 26, 2020,1, "Montreal", "Toronto");
    
            traveller[2].setName("Louise");
            traveller[2].setPassengerMonth(3);
            traveller[2].setPassengerDay(3);
            traveller[2].setPassengerYear(1993);
            res[2].setReservationRequest(traveller[2], 4, 26, 2020,1, "Dorval", "Kingston");
        
            traveller[3].setName("Thanos");
            traveller[3].setPassengerMonth(4);
            traveller[3].setPassengerDay(4);
            traveller[3].setPassengerYear(1994);
            res[3].setReservationRequest(traveller[3], 4, 26, 2020,2, "Kingston", "Toronto");
        
            traveller[4].setName("Tony");
            traveller[4].setPassengerMonth(5);
            traveller[4].setPassengerDay(5);
            traveller[4].setPassengerYear(1995);
            res[4].setReservationRequest(traveller[4], 4, 26, 2020,1, "Belleville", "Toronto");
            
            ReservationManager newManager(res[0].getTravelDate(), res);
    
    return 0;
}
