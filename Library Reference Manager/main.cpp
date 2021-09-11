//
//  main.cpp
//  Assignment 3
//
//  Created by Bilal Yattou on 2020-02-20.
//  Copyright © 2020 Bilal Yattou. All rights reserved.
//
// Name: Bilal Yattou  ID: 40110820
// Partner: Matthieu Pourrat ID:40089209
// IDE: Xcode

#include <iostream>
#include "ReferenceManager.h"

using namespace std;


int main() {
   
    int referenceManagerSize = 0;
        cout << "How many references would you like to add: ";
        cin >> referenceManagerSize;
        cout << endl;
        ReferenceManager reference(referenceManagerSize);
    
        Article article;
        Textbook textbook;
    
        int button = 0;
        int button2 = 0;
        string title = " ";
        string author = " ";
        string publisher = " ";
        string url = " ";
        string journal = " ";
        int pages = 0;
        int startPage = 0;
        int stopPage = 0;
        int year = 0;
        int identifier = 0;
        int size = 100;
        int pos = 0;
    
        for (int i = 0; i < size; i++)
        {
            cout << "What action would you like to do: " << endl;
            cout << "Press 1 for adding a reference." << endl;
            cout << "Press 2 for removing a reference." << endl;
            cout << "Press 3 to search for a reference." << endl;
            cout << "Press 4 to get an identifier at a given position: " << endl;
            cout << "Press 5 to print the content of the manager: " << endl;
            cout << "Press 6 to exit the program." << endl;
            cout << endl;
            cin >> button;
            cout << endl << endl;
            if (button == 1)
            {
                cout << "What reference would you like to add: " << endl;
                cout << "Press 1 to add book." << endl;
                cout << "Press 2 to add an article." << endl;
                cout << "Press 3 to add a Textbook." << endl;
                cin >> button2;
                cout << endl;
                if (button2 == 1)
                {
                    cout << "Please enter the title of the reference: ";
                    cin >> title;
                    cout << "Please enter the author of the reference: ";
                    cin >> author;
                    cout << "please enter the year the reference was published: ";
                    cin >> year;
                    cout << "Please enter the publisher of the book: ";
                    cin >> publisher;
                    cout << "Please enter the number of pages in the book: ";
                    cin >> pages;
                    Book book(title, author, year, publisher, pages);
                    reference.addReference(book);
                    
                    cout<<endl<<"The reference of the entered book is: "<<book.getId()<<endl;
                }
                else if (button2 == 2)
                {
                    cout << "Please enter the title of the reference: ";
                    cin >> title;
                    cout << "Please enter the author of the reference: ";
                    cin >> author;
                    cout << "please enter the year the reference was published: ";
                    cin >> year;
                    cout << "Please enter the publisher of the book: ";
                    cin >> journal;
                    cout << "Please enter the first page of the article: ";
                    cin >> startPage;
                    cout << "Now the last page: ";
                    cin >> stopPage;
                    Article article(title, author, year, journal, startPage, stopPage);
                    reference.addReference(article);
                    
                    cout<<endl<<"The reference of the entered article is: "<<article.getId()<<endl;
                }
                else if (button2 == 3)
                {
                    cout << "Please enter the title of the reference: ";
                    cin >> title;
                    cout << "Please enter the author of the reference: ";
                    cin >> author;
                    cout << "please enter the year the reference was published: ";
                    cin >> year;
                    cout << "Please add an url for the textbook: ";
                    cin >> url;
                    Textbook textbook(title, author, year, publisher, pages, url);
                    reference.addReference(textbook);
                    
                    cout<<endl<<"The reference of the entered textbook is: "<<textbook.getId()<<endl;
                }
    
            }
            else if (button == 2)
            {
                cout << "Please enter the identifier of the reference you would like to remove: ";
                cin >> pos;
                reference.removeReference(pos); //the int variable is called pos but it passes an identifier to search for the function.
            }
            else if (button == 3)
            {
                cout << "Please enter the identifer of the reference you would like to see: ";
                cin >> identifier;
                reference.searchReference(identifier);
            }
            else if (button == 4)
            {
                cout << "At what position would you like to get the identifier: ";
                cin >> pos;
                cout << endl;
            }
            else if (button == 5)
            {
                cout << "Here is the content of the manager: " << endl;
                reference.print();
                cout << endl;
            }
            else if (button == 6)
            {
                cout << "The program is now terminated." << endl;
                break;
                return 0;
            }
            else
                cout << "Invalid command. Try again." << endl;
    
            cout << endl;
        }
    return 0;
}
