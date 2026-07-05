/*
------------------------------------------------------------
Title       : Function Overriding using C++
Folder      : 03-inheritance
File        : function_overriding.cpp

Purpose:
To understand the concept of Function Overriding
in C++.

Description:
This program demonstrates how a derived class
redefines a function of the base class having
the same name and signature.

Working:
1. Create a base class Person.
2. Define display() in Person.
3. Override display() in Student.
4. Call the overridden function.

Concepts Covered:
- Inheritance
- Function Overriding
- Base Class
- Derived Class
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

// Base Class
class Person
{
protected:
    string name;

public:

    Person(string n)
    {
        name = n;
    }

    void display()
    {
        cout << "\n===== Person Details =====\n";
        cout << "Name : " << name << endl;
    }
};

// Derived Class
class Student : public Person
{
private:
    int rollNo;
    float marks;

public:

    Student(string n, int r, float m)
        : Person(n)
    {
        rollNo = r;
        marks = m;
    }

    // Function Overriding
    void display()
    {
        cout << "\n===== Student Details =====\n";

        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main()
{
    Student student1("Prince Sharma", 101, 95.5);

    student1.display();

    return 0;
}
