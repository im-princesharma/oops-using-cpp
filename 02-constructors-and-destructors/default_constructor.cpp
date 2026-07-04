/*
------------------------------------------------------------
Title       : Default Constructor using C++
Folder      : 02-constructors-and-destructors
File        : default_constructor.cpp

Purpose:
To understand the concept of a Default Constructor in C++.

Description:
This program demonstrates how a default constructor
is automatically called when an object is created.

Working:
1. Create a Student class.
2. Define a default constructor.
3. Display a message from the constructor.
4. Display student information.

Concepts Covered:
- Constructor
- Default Constructor
- Automatic Constructor Invocation
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:

    Student()
    {
        rollNo = 101;
        name = "Prince Sharma";

        cout << "Default Constructor Called Successfully.\n";
    }

    void display()
    {
        cout << "\n========== Student Details ==========\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
    }
};

int main()
{
    Student student1;

    student1.display();

    return 0;
}
