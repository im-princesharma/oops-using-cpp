/*
------------------------------------------------------------
Title       : Constructor Overloading using C++
Folder      : 02-constructors-and-destructors
File        : constructor_overloading.cpp

Purpose:
To understand the concept of Constructor Overloading
in C++.

Description:
This program demonstrates how multiple constructors
can exist in the same class with different parameter
lists.

Working:
1. Create a Student class.
2. Define a default constructor.
3. Define a parameterized constructor.
4. Create objects using both constructors.
5. Display object information.

Concepts Covered:
- Constructor
- Default Constructor
- Parameterized Constructor
- Constructor Overloading
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

    // Default Constructor
    Student()
    {
        rollNo = 0;
        name = "Not Assigned";
        marks = 0;

        cout << "Default Constructor Called.\n";
    }

    // Parameterized Constructor
    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;

        cout << "Parameterized Constructor Called.\n";
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
    Student student1;

    Student student2(101, "Prince Sharma", 95.5);

    cout << "\nStudent 1";
    student1.display();

    cout << "\nStudent 2";
    student2.display();

    return 0;
}
