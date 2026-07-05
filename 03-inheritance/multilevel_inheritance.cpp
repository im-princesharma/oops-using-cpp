/*
------------------------------------------------------------
Title       : Multilevel Inheritance using C++
Folder      : 03-inheritance
File        : multilevel_inheritance.cpp

Purpose:
To understand the concept of Multilevel Inheritance
in C++.

Description:
This program demonstrates how a class inherits from
another derived class, forming a chain of inheritance.

Working:
1. Create a base class Person.
2. Create Student derived from Person.
3. Create Result derived from Student.
4. Accept student details.
5. Display complete result information.

Concepts Covered:
- Multilevel Inheritance
- Base Class
- Intermediate Class
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

// Intermediate Class
class Student : public Person
{
protected:
    int rollNo;

public:

    void inputStudent()
    {
        cout << "Enter Roll Number : ";
        cin >> rollNo;

        inputPerson();
    }

    void displayStudent()
    {
        cout << "Roll Number : " << rollNo << endl;

        displayPerson();
    }
};

// Derived Class
class Result : public Student
{
private:
    float marks;

public:

    void inputResult()
    {
        inputStudent();

        cout << "Enter Marks : ";
        cin >> marks;
    }

    void displayResult()
    {
        cout << "\n========== Student Result ==========\n";

        displayStudent();

        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Result student1;

    student1.inputResult();

    student1.displayResult();

    return 0;
}
