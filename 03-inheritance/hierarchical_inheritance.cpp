/*
------------------------------------------------------------
Title       : Hierarchical Inheritance using C++
Folder      : 03-inheritance
File        : hierarchical_inheritance.cpp

Purpose:
To understand the concept of Hierarchical Inheritance
in C++.

Description:
This program demonstrates how multiple derived classes
inherit from a single base class.

Working:
1. Create a base class Person.
2. Create Student and Employee classes.
3. Both classes inherit from Person.
4. Accept and display information separately.

Concepts Covered:
- Hierarchical Inheritance
- Base Class
- Multiple Derived Classes
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

// Derived Class 1
class Student : public Person
{
private:
    int rollNo;
    float marks;

public:

    void inputStudent()
    {
        cout << "Enter Roll Number : ";
        cin >> rollNo;

        inputPerson();

        cout << "Enter Marks : ";
        cin >> marks;
    }

    void displayStudent()
    {
        cout << "\n========== Student Details ==========\n";

        cout << "Roll Number : " << rollNo << endl;

        displayPerson();

        cout << "Marks : " << marks << endl;
    }
};

// Derived Class 2
class Employee : public Person
{
private:
    int employeeID;
    float salary;

public:

    void inputEmployee()
    {
        cout << "\nEnter Employee ID : ";
        cin >> employeeID;

        inputPerson();

        cout << "Enter Salary : ";
        cin >> salary;
    }

    void displayEmployee()
    {
        cout << "\n========== Employee Details ==========\n";

        cout << "Employee ID : " << employeeID << endl;

        displayPerson();

        cout << "Salary : Rs. " << salary << endl;
    }
};

int main()
{
    Student student1;

    Employee employee1;

    cout << "===== Student Information =====\n";

    student1.inputStudent();

    cout << "\n===== Employee Information =====";

    employee1.inputEmployee();

    student1.displayStudent();

    employee1.displayEmployee();

    return 0;
}