/*
------------------------------------------------------------
Title       : Function Overriding using Virtual Function
Folder      : 04-polymorphism
File        : function_overriding_virtual.cpp

Purpose:
To understand Runtime Polymorphism using
Virtual Functions.

Description:
This program demonstrates how a virtual function
allows the derived class function to be called
through a base class pointer.

Working:
1. Create a base class Person.
2. Declare a virtual display() function.
3. Override display() in Student.
4. Access the object using a base class pointer.
5. Observe runtime polymorphism.

Concepts Covered:
- Runtime Polymorphism
- Virtual Function
- Function Overriding
- Base Class Pointer
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

    virtual void display()
    {
        cout << "\n===== Person Details =====" << endl;
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

    void display() override
    {
        cout << "\n===== Student Details =====" << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main()
{
    Person *ptr;

    Student student1("Prince Sharma", 101, 95.5);

    ptr = &student1;

    ptr->display();

    return 0;
}
