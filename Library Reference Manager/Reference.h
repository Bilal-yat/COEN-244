//
//  Reference.h
//  Assignment 3
//
//  Created by Bilal Yattou on 2020-02-20.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou  ID: 40110820
// Partner: Matthieu Pourrat ID:40089209
// IDE: Xcode

#include <iostream>
#include <string>
#pragma once
using namespace std;

class Reference{
    
private:
    
    int id;
    string title;
    string author;
    int year;
    static int identifier;
    
public:
    
    Reference();
    Reference(string, string ,int);
    Reference (const Reference&);
    void setIdentifier();
    const int getId();
    const string getTitle();
    const string getAuthor();
    const int getYear();
    
    const void print();
    
    ~Reference();
};
