/*
------------------------------------------------------------
Title       : Hybrid Inheritance using C++
Folder      : 03-inheritance
File        : hybrid_inheritance.cpp

Purpose:
To understand the concept of Hybrid Inheritance
and Virtual Base Classes in C++.

Description:
This program demonstrates Hybrid Inheritance where
multiple inheritance and multilevel inheritance are
combined. Virtual inheritance is used to avoid the
Diamond Problem.

Working:
1. Create base class Person.
2. Student and Employee inherit Person virtually.
3. Assistant inherits Student and Employee.
4. Display complete information.

Concepts Covered:
- Hybrid Inheritance
- Virtual Base Class
- Diamond Problem
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

    void inputPerson()
    {
        cin.ignore();

        cout << "Enter Name : ";
        getline(cin, name);

        cout << "Enter Age : ";
        cin >> age;
    }

    void displayPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Virtual Inheritance
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

// Virtual Inheritance
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

// Hybrid Inheritance
class Assistant : public Student, public Employee
{
private:
    float salary;

public:

    void inputAssistant()
    {
        inputPerson();
        inputStudent();
        inputEmployee();

        cout << "Enter Salary : ";
        cin >> salary;
    }

    void displayAssistant()
    {
        cout << "\n========== Assistant Details ==========\n";

        displayPerson();
        displayStudent();
        displayEmployee();

        cout << "Salary : Rs. " << salary << endl;
    }
};

int main()
{
    Assistant assistant1;

    assistant1.inputAssistant();

    assistant1.displayAssistant();

    return 0;
}