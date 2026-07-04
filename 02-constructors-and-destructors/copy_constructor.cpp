/*
------------------------------------------------------------
Title       : Copy Constructor using C++
Folder      : 02-constructors-and-destructors
File        : copy_constructor.cpp

Purpose:
To understand the concept of a Copy Constructor in C++.

Description:
This program demonstrates how a Copy Constructor
creates a new object by copying the values of an
existing object.

Working:
1. Create a Student class.
2. Define a parameterized constructor.
3. Define a copy constructor.
4. Create one object.
5. Copy the first object into another object.
6. Display both objects.

Concepts Covered:
- Constructor
- Parameterized Constructor
- Copy Constructor
- Object Copying
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

    // Parameterized Constructor
    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;

        cout << "Parameterized Constructor Called.\n";
    }

    // Copy Constructor
    Student(const Student &obj)
    {
        rollNo = obj.rollNo;
        name = obj.name;
        marks = obj.marks;

        cout << "Copy Constructor Called.\n";
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

    Student student2 = student1;

    cout << "\nFirst Object:";
    student1.display();

    cout << "\nSecond Object:";
    student2.display();

    return 0;
}
