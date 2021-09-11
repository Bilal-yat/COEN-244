//
//  Book.cpp
//  Assignment 3
//
//  Created by Bilal Yattou on 2020-02-21.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou 
// IDE: Xcode

#include <stdio.h>
#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

Book::Book():Reference(){
    
    publisher = "";
    numPages = 0;
}

Book::Book(string title3, string author3, int year3, string pub1, int numP1):Reference(title3, author3, year3){
    
    publisher = pub1;
    numPages = numP1;
}

void Book::setPublisher(string pub1){
    
    publisher = pub1;
}

const string Book::getPublisher(){
    
    return publisher;
}

const int Book::getNumberOfPages(){
    
    return numPages;

}

const void Book::print(){
    
    cout<<"Publisher: "<<publisher<<endl;
    cout<<"Number of Pages: "<<numPages<<endl;
    
}

Book::~Book(){
    
    //
}
