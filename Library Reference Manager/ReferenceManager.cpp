//
//  ReferenceManager.cpp
//  Assignment 3
//
//  Created by Bilal Yattou on 2020-02-26.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou 
// IDE: Xcode

#include <stdio.h>
#include "ReferenceManager.h"
#include <string>

ReferenceManager::ReferenceManager()
{
    size = 0;
    capacity = 0;
    reference = new Reference[capacity];
}

ReferenceManager::ReferenceManager(int i)
{
    size = 0;
    capacity = i;
    reference = new Reference[i];
}

ReferenceManager::ReferenceManager(const ReferenceManager& a)
{
    size = a.size;
    capacity = a.capacity;
    reference = new Reference[capacity];
    for (int i = 0; i < capacity; i++)
    {
        reference[i] = a.reference[i];
    }
}


bool ReferenceManager::addReference(const Reference& a)
{
    if (size < capacity)
    {
        reference[size] = a;
        size++;
        return true;
    }
    else
    {
        cout << "You can't add a new reference." << endl << endl;
        return false;
    }
}

int ReferenceManager::getReference(int p)
{
    cout << "The identifier for the reference at position " << p << " is: ";
    return reference[p].getId();
}

bool ReferenceManager::removeReference(int p)
{
    for (int i = 0; i < size; i++)
    {
        if (reference[i].getId() == p)
        {
            for (int j = 0; j < size - 1; j++)
            {
                reference[p] = reference[p + 1];
                size--;
            }
            return true;
        }
    }
    return false;
}

bool ReferenceManager::searchReference(int a) //switched from search with position to search with identifier. I find it more logical.
{
    for (int i = 0; i < size; i++)
    {
        if (reference[i].getId() == a)
        {
            cout<<endl<< "The reference n*: " << a << " exists." << endl;
            reference[i].print();
            cout << endl << endl;
            return true;
        }
    }
    cout<<endl<< "The reference n*: " << a << " doesn't exist." << endl << endl;
    return false;
}

void ReferenceManager::print() const
{
    for (int i = 0; i < size; i++)
    {
        reference[i].print();
        cout << endl;
    }

    cout << endl;
}

ReferenceManager::~ReferenceManager()
{
    //
}
