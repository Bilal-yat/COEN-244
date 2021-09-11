//
//  Textbook.cpp
//  Assignment 3
//
//  Created by Bilal Yattou on 2020-02-21.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou 
// IDE: Xcode

#include <iostream>
#include <stdio.h>
#include "Textbook.h"
using namespace std;

Textbook::Textbook():Book(){
    
    URL = "";
}

Textbook::Textbook(string title4, string author4, int year4, string pub2, int numP2, string URL1):Book(title4, author4, year4, pub2, numP2){
    
    URL  = URL1;
}

void Textbook::setURL(string URL1){
    
    URL = URL1;
}

const string Textbook::getURL(){
    
    return URL;
}

const void Textbook::print(){
    
    cout<<"URL: "<<URL<<endl;
}

Textbook::~Textbook(){
    //
}
