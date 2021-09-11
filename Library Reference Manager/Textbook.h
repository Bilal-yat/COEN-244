//
//  Textbook.h
//  Assignment 3
//
//  Created by Bilal Yattou on 2020-02-21.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou 
// IDE: Xcode

#include <string>
#include "Book.h"
#pragma once
using namespace std;

class Textbook:public Book{
    
private:
    
    string URL;
    
public:
    
    Textbook();
    Textbook(string,string,int,string,int,string);
    Textbook(const Textbook&);
    
    void setURL(string);
    const string getURL();
    const void print();
        
    ~Textbook();
    
};
