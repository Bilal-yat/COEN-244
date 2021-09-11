//  Date.h
//  Assgnmt2
//
//  Created by Bilal Yattou on 2020-01-30.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//

//Name: Bilal Yattou ;
//IDE: Xcode

#ifndef Date_h
#define Date_h

class Date{
    
private:
    
    int month;
    int day;
    int year;
    
    
    
public:
                              /* Constructors */
    Date();
    Date(int,int,int);
    Date(const Date&);
    
                            /* Setters and getters */
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    const int getMonth();
    const int getDay();
    const int getYear();
    
                            /* Member Functions */
    
    const void printDate();
    
                           /*Destructor*/
    ~Date();

        
};

#endif /* Date_h */
