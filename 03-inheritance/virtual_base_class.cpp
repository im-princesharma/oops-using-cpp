/*
------------------------------------------------------------
Title       : Virtual Base Class using C++
Folder      : 03-inheritance
File        : virtual_base_class.cpp

Purpose:
To understand the concept of Virtual Base Classes
and solve the Diamond Problem.

Description:
This program demonstrates how virtual inheritance
ensures that only one copy of the base class exists
in the final derived class.

Working:
1. Create base class Person.
2. Student and Employee inherit Person virtually.
3. Assistant inherits Student and Employee.
4. Access Person data only once.

Concepts Covered:
- Virtual Base Class
- Diamond Problem
- Hybrid Inheritance
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

    void inputPerson()
    {
        cin.ignore();

        cout << "Enter Name : ";
        getline(cin, name);
    }

    void displayPerson()
    {
        cout << "Name : " << name << endl;
    }
};

// Virtual Base Classes
class Student : virtual public Person
{
protected:
    int rollNo;

public:

    void inputStudent()
    {
        cout << "Enter Roll Number : ";
        cin >> rollNo;
    }

    void displayStudent()
    {
        cout << "Roll Number : " << rollNo << endl;
    }
};

class Employee : virtual public Person
{
protected:
    int employeeID;

public:

    void inputEmployee()
    {
        cout << "Enter Employee ID : ";
        cin >> employeeID;
    }

    void displayEmployee()
    {
        cout << "Employee ID : " << employeeID << endl;
    }
};

// Final Derived Class
class Assistant : public Student, public Employee
{
public:

    void input()
    {
        inputPerson();
        inputStudent();
        inputEmployee();
    }

    void display()
    {
        cout << "\n========== Assistant Details ==========\n";

        displayPerson();
        displayStudent();
        displayEmployee();
    }
};

int main()
{
    Assistant assistant1;

    assistant1.input();

    assistant1.display();

    return 0;
}
