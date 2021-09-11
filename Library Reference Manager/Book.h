//
//  Book.h
//  Assignment 3
//
//  Created by Bilal Yattou on 2020-02-21.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou 
// IDE: Xcode

#include <iostream>
#include <string>
#include "Reference.h"
#pragma once
using namespace std;

class Book:public Reference{
    
private:
    
    string publisher;
    int numPages;
    
public:
    
    Book();
    Book(string,string,int,string,int);
    Book(const Book&);
    
    const int getNumberOfPages();
    void setPublisher(string);
    const string getPublisher();
    const void print();
    
    ~Book();
    
   
    };
