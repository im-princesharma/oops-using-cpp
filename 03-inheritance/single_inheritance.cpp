/*
------------------------------------------------------------
Title       : Single Inheritance using C++
Folder      : 03-inheritance
File        : single_inheritance.cpp

Purpose:
To understand the concept of Single Inheritance in C++.

Description:
This program demonstrates how one derived class
inherits the properties and functions of one base class.

Working:
1. Create a base class Person.
2. Create a derived class Student.
3. Accept student information.
4. Display inherited and own data.

Concepts Covered:
- Inheritance
- Single Inheritance
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

// Derived Class
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

int main()
{
    Student student1;

    student1.inputStudent();

    student1.displayStudent();

    return 0;
}