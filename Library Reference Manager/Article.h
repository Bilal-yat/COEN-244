//
//  Article.h
//  Assignment 3
//
//  Created by Bilal Yattou on 2020-02-20.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou
// IDE: Xcode

#include <iostream>
#include <string>
#include "Reference.h"
#pragma once
using namespace std;

class Article: public Reference{
    
private:
    
    string info;
    int startPage;
    int endPage;
    
public:
    
    Article();
    Article(string T, string A, int,string ,int, int);
    Article(const Article&);
    
    const string getInfo();
    const int getStart();
    const int getEnd();
    const int getNumberOfPages();
    
    const void print();
    
    
    ~Article();
    
};

