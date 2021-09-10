//
//  main.cpp
//  Assgn1
//
//  Created by Bilal Yattou on 2020-01-21.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Bilal Yattou
// ID: 40110820

#include <iostream>
using namespace std;

int total=0;

int convert(char[]);


int main()
{

    char str[20];
    
    cout<<"Enter the roman number to be converted: ";
    
    cin>>str;
    
    
    cout<<"The value of the entered number is: " <<convert(str)<<endl;
        
    return 0;
}



int convert(char str[])
{
    for (int i = 0; i<20; i++)
    {
       if (str[i] =='V' && str[i-1]=='I')
       total +=3;
       else if (str[i] =='X' && str[i-1]=='I')
        total += 8;
        else if (str[i] =='L' && str[i-1]=='X')
        total += 30;
        else if (str[i] =='D' && str[i-1]=='C')
        total += 300;
        else if (str[i] =='M' && str[i-1]=='C')
        total += 800;
        
       else if (str[i]=='I')
        total +=1;
       else if (str[i]=='V')
        total += 5;
        else if (str[i]=='X')
        total += 10;
        else if (str[i]=='L')
        total += 50;
        else if (str[i]=='C')
        total += 100;
        else if (str[i]=='D')
        total += 500;
        else if (str[i]=='M')
        total += 1000;
        
        
        
    }
    return total;
}
