/*
------------------------------------------------------------
Title       : Multiple Inheritance using C++
Folder      : 03-inheritance
File        : multiple_inheritance.cpp

Purpose:
To understand the concept of Multiple Inheritance in C++.

Description:
This program demonstrates how one derived class can
inherit properties and functions from two base classes.

Working:
1. Create a base class Person.
2. Create another base class Sports.
3. Create a derived class Student.
4. Accept details from both base classes.
5. Display all information.

Concepts Covered:
- Multiple Inheritance
- Base Classes
- Derived Class
- Function Reuse
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

// Base Class 1
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

// Base Class 2
class Sports
{
protected:
    string sportName;
    int achievements;

public:
    void inputSports()
    {
        cin.ignore();

        cout << "Enter Sport Name : ";
        getline(cin, sportName);

        cout << "Enter Number of Achievements : ";
        cin >> achievements;
    }

    void displaySports()
    {
        cout << "Sport        : " << sportName << endl;
        cout << "Achievements : " << achievements << endl;
    }
};

// Derived Class
class Student : public Person, public Sports
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

        inputSports();
    }

    void displayStudent()
    {
        cout << "\n========== Student Details ==========\n";

        cout << "Roll Number : " << rollNo << endl;

        displayPerson();

        cout << "Marks : " << marks << endl;

        displaySports();
    }
};

int main()
{
    Student student1;

    student1.inputStudent();

    student1.displayStudent();

    return 0;
}
