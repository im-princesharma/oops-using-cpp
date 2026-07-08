/*
------------------------------------------------------------   
Title       : Read-Only Object using Const Member Function 
Folder      : 05-encapsulation   
File        : readonly_object.cpp  
  
Purpose:  
To understand how const member functions allow    
read-only access to object data. 

Description: 
This program demonstrates how const member
functions can be used to safely access data
without modifying the object's state.

Working:
1. Create a Book class.
2. Store book details privately.
3. Display details using a const member function.
4. Access the object as a const object.

Concepts Covered:
- Encapsulation
- Const Member Function
- Read-Only Object
- Data Protection
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    int bookId;
    string title;
    string author;

public:

    Book(int id, string t, string a)
    {
        bookId = id;
        title = t;
        author = a;
    }

    void display() const
    {
        cout << "\n===== Book Details =====" << endl;
        cout << "Book ID : " << bookId << endl;
        cout << "Title   : " << title << endl;
        cout << "Author  : " << author << endl;
    }
};

int main()
{
    const Book book(101, "Object Oriented Programming", "Bjarne Stroustrup");

    book.display();

    return 0;
}
