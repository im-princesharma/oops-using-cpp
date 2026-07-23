/*
------------------------------------------------------------    
Title       : Book Class using C++  
Folder      : 01-classes-and-objects  
File        : book_class.cpp 

Purpose:
To understand how Classes and Objects can be used to 
store and display book information.

Description:  
This program creates a Book class with private data
members and public member functions. It accepts book 
details from the user and displays them.  

Working:
1. Create a Book class. 
2. Declare private data members.   
3. Create input() and display() functions.  
4. Accept book details from the user.
5. Display the entered information.  

Concepts Covered:  
- Class
- Object 
- Private Data Members 
- Public Member Functions
- String Handling 
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    int bookID;
    string title;
    string author;
    float price;

public:
    void input()
    {
        cout << "Enter Book ID : ";
        cin >> bookID;

        cin.ignore();

        cout << "Enter Book Title : ";
        getline(cin, title);

        cout << "Enter Author Name : ";
        getline(cin, author);

        cout << "Enter Book Price : ";
        cin >> price;
    }

    void display()
    {
        cout << "\n========== Book Details ==========\n";

        cout << "Book ID     : " << bookID << endl;
        cout << "Title       : " << title << endl;
        cout << "Author      : " << author << endl;
        cout << "Price       : Rs. " << price << endl;
    }
};

int main()
{
    Book book1;

    book1.input();

    book1.display();

    return 0;
}
