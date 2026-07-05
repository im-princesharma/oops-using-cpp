/*
------------------------------------------------------------
Title       : Constructor in Inheritance using C++
Folder      : 03-inheritance
File        : constructor_in_inheritance.cpp

Purpose:
To understand how constructors are executed
in inheritance.

Description:
This program demonstrates that when a derived
class object is created, the base class constructor
is called first, followed by the derived class
constructor.

Working:
1. Create a base class Person.
2. Create a derived class Student.
3. Define constructors in both classes.
4. Observe constructor execution order.

Concepts Covered:
- Constructor
- Inheritance
- Constructor Chaining
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
    int age;

public:

    Person(string n, int a)
    {
        name = n;
        age = a;

        cout << "Person Constructor Called." << endl;
    }

    void displayPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Derived Class
class Student : public Person
{
private:
    int rollNo;
    float marks;

public:

    Student(string n, int a, int r, float m)
        : Person(n, a)
    {
        rollNo = r;
        marks = m;

        cout << "Student Constructor Called." << endl;
    }

    void displayStudent()
    {
        cout << "\n========== Student Details ==========\n";

        displayPerson();

        cout << "Roll Number : " << rollNo << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main()
{
    Student student1("Prince Sharma", 20, 101, 95.5);

    student1.displayStudent();

    return 0;
}
