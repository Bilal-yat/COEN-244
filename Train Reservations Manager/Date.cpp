//
//  Date.cpp
//  Assgnmt2
//
//  Created by Bilal Yattou on 2020-01-30.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//

//Name: Bilal Yattou ; ID: 40110820
//IDE: Xcode

#include <stdio.h>
#include "Date.h"
#include <iostream>


Date::Date() { //default constructor

    month = 1;
    day = 1;
    year = 1;
}

Date::Date(int x, int y, int z){ //regular constructor
    
    if(x>=1 && x<=12){
        
         month = x;
     }
     
     if(y>=1 && y<=31){
        
         day = y;
     }
    
    if(z>=0){
        
        year = z;
    }
    
}

Date::Date(const Date& anotherDate){ //copy constructor
    
    month = anotherDate.month;
    day = anotherDate.day;
    year = anotherDate.year;
    
    
    
}

void Date::setMonth(int x){
    
    if(x>=1 && x<=12){
       
        month = x;
    }
    
}

void Date::setDay(int y){
    
    if(y>=1 && y<=12){
       
        day = y;
    }
    
}

void Date::setYear(int z){
    
    if(z>0){
       
        year = z;
    }
    
}


const int Date::getMonth(){
    
    return month;
    
}

const int Date::getDay(){
    
    return day;
    
}

const int Date::getYear(){
    
    return year;
    
}

const void Date::printDate(){
    
    std::cout<< month << " "<< day << " "<< year;
    
}

Date::~Date(){ //Destructor
    
    //Do nothing
}
