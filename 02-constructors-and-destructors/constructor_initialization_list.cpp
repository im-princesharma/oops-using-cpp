/*
------------------------------------------------------------
Title       : Constructor Initialization List using C++
Folder      : 02-constructors-and-destructors 
File        : constructor_initialization_list.cpp 

Purpose:  
To understand the concept of Constructor Initialization 
Lists in C++.

Description:
This program demonstrates how data members can be 
initialized efficiently using a constructor
initialization list instead of assigning values inside
the constructor body.

Working:
1. Create a Student class.
2. Define a parameterized constructor.
3. Initialize data members using an initialization list.
4. Display the initialized values.

Concepts Covered:
- Constructor
- Constructor Initialization List
- Object Initialization
- Modern C++ Programming
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

    // Constructor using Initialization List
    Student(int r, string n, float m)
        : rollNo(r), name(n), marks(m)
    {
        cout << "Constructor Initialization List Executed Successfully.\n";
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
