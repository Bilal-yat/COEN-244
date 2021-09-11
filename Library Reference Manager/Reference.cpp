//
//  Reference.cpp
//  Assignment 3
//
//  Created by Bilal Yattou on 2020-02-20.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou  ID: 40110820
// Partner: Matthieu Pourrat ID:40089209
// IDE: Xcode

#include <iostream>
#include <stdio.h>
#include <string>
#include "Reference.h"
using namespace std;

int Reference::identifier = 0;

Reference::Reference(){
    title = "";
    author = "";
    year = 0;
    setIdentifier();
}

Reference::Reference(string title1, string author1, int year1){
    
    title = title1;
    author = author1;
    year = year1;
    setIdentifier();
}

void Reference::setIdentifier(){
    
    identifier = identifier+1;
    id = identifier;
}


const int Reference::getId(){
    
    return id;
}

const string Reference::getTitle(){
    
    return title;
}

const string Reference::getAuthor(){
    
    return author;
}

const int Reference::getYear(){
    
    return year;
}


const void Reference::print(){
    
    cout<<"Identifier: "<<getId()<<endl<<"Title: "<<getTitle()<<endl<<"Author: "<<getAuthor()<<endl<<"Year: "<<getYear()<<endl;
    
}

Reference::~Reference(){
    
}
