//
//  Article.cpp
//  Assignment 3
//
//  Created by Bilal Yattou on 2020-02-20.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou
// IDE: Xcode

#include <iostream>
#include <stdio.h>
#include <string>
#include "Article.h"
using namespace std;

Article:: Article():Reference(){
    
    info = "";
    startPage = 0;
    endPage = 0;
}

Article::Article(string title2, string author2,int year2,string info1, int start1, int end1):Reference(title2,author2, year2){
    
    info = info1;
    startPage = start1;
    endPage = end1;
}

const string Article::getInfo(){
    return info;
}

const int Article::getStart(){
    
    return startPage;
}
const int Article::getEnd(){
    
    return endPage;
}

const int Article::getNumberOfPages(){
    
    return (endPage - startPage);
}


const void Article::print(){
    
     cout<<"Identifier: "<<getId()<<endl<<"Title: "<<getTitle()<<endl<<"Author: "<<getAuthor()<<endl<<"Year: "<<getYear()<<endl;
    cout<<"Information about the journal: "<<getInfo()<<endl<<"Start Page: "<<getStart()<<endl<<"End Page: "<<getEnd()<<endl;
    
}

Article::~Article(){
    
}
