//
//  ReservationManager.cpp
//  Assgnmt2
//
//  Created by Bilal Yattou on 2020-02-09.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//

//Name: Bilal Yattou ; ID: 40110820
//IDE: Xcode

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "ReservationManager.h"
using namespace std;

ReservationManager::ReservationManager(){
    
}

ReservationManager::ReservationManager(Date date4, ReservationRequest r[]){
    
    for (int i=0; i<6; i++){
        
        for (int j=0; j<6; j++){
            
                   if ((r[i].getDestination() == "Dorval") && (j == 1))
                        {
                            break;
                        }
                        
                        if ((r[i].getDestination() == "Brockville") && (j == 2))
                        {
                            break;
                        }
                        
                        if ((r[i].getDestination() == "Kingston") && (j == 3))
                        {
                            break;
                        }
                        
                        if ((r[i].getDestination() == "Belleville") && (j == 4))
                        {
                            break;
                        }
                        
                        if ((r[i].getDestination() == "Toronto") && (j == 5))
                        {
                            break;
                        }
                        
                        reservationTable[i][j] = r[i].getRequestNumber();
                        
                        if ((r[i].getStart() == "Dorval") && (j < 1))
                        {
                           
                            reservationTable[i][j] = 0;
                        }
                        
                        if ((r[i].getStart() == "Brockville") && (j < 2))
                        {
                            reservationTable[i][j] = 0;
                        }
                        
                        if ((r[i].getStart() == "Kingston") && (j < 3) && (capacity > 1))
                        {
                            reservationTable[i][j] = 0;
                            
                        }
                        
                        if ((r[i].getStart() == "Belleville") && (j < 4))
                        {
                            reservationTable[i][j] = 0;
                        }
                       
                        
                    }
                    
                }
    
    cout<<"\n\n";
                cout<<setw(13)<<"Request Number "<<setw(10)<<"Start"<<setw(19)<<"Destination"<<setw(20)<<"No of passengers"<<endl;
    cout<<endl;
                for(int i = 0; i < 5; i++)
                {
                    cout<<left<<setw(20)<<r[i].getRequestNumber()<<left<<setw(13)<<r[i].getStart()<<setw(20)<<r[i].getDestination()<<r[i].getNumberSeats()<<endl;
                }
                
    
    
    cout<<"\n\n";
                cout <<setw(9)<< "Seat no" <<setw(15) << " Montreal" <<setw(15)<<"Dorval" <<setw(16)<<"Brockville"<<setw(15)<<"Kingston"<<setw(14)<<"Belleville"<<setw(13)<<       "Toronto"<<endl;
                
    cout<<endl;
                for(int i = 0; i <5; i++)
                {
                    cout<< left <<setw(10)<<i<<left<<setw(5);
                    for(int j = 0; j <6; j++)
                    {
                        cout<<left <<setw(15)<<reservationTable[i][j]<<left<<setw(2);
                    }
                    cout<<endl;
                }
                
    cout<<endl;
            }

ReservationManager::~ReservationManager(){
    
    //Do nothing
}
                    
    
        
    
            
            
            
        
    
    
    
    
    
    

