/*
------------------------------------------------------------ 
Title       : Parameterized Constructor using C++ 
Folder      : 02-constructors-and-destructors
File        : parameterized_constructor.cpp

Purpose:
To understand how a Parameterized Constructor initializes
objects with user-defined values during object creation.

Description:
This program creates a Student class with a parameterized
constructor. The constructor initializes the object's data
members when the object is created.

Working:
1. Create a Student class.
2. Define a parameterized constructor.
3. Pass values while creating the object.
4. Display the initialized values.

Concepts Covered:
- Constructor
- Parameterized Constructor
- Object Initialization
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
    float marks;

public:

    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;

        cout << "Parameterized Constructor Called Successfully.\n";
    }

    void display()
    {
        cout << "\n========== Student Details ==========\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main()
{
    Student student1(101, "Prince Sharma", 95.5);

    student1.display();

    return 0;
}
