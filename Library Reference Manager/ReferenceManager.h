//
//  ReferenceManager.h
//  Assignment 3
//
//  Created by Bilal Yattou on 2020-02-26.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou 
// IDE: Xcode

#include <iostream>
#include <string>
#include "Article.h"
#include "Book.h"
#include "Textbook.h"
#pragma once

class ReferenceManager{
    
private:
    
    int size;
    int capacity;
    Reference* reference;
    
public:
    
    ReferenceManager();
    ReferenceManager(int);
    ReferenceManager(const ReferenceManager&);
        
    
    bool addReference(const Reference&);
    int getReference(int);
    bool removeReference(int);
    bool searchReference(int);
    
    void print() const;

    ~ReferenceManager();
    
    
};



