/*
------------------------------------------------------------
Title       : Protected Members in Inheritance using C++
Folder      : 03-inheritance
File        : protected_access.cpp

Purpose:
To understand the concept of protected access
specifier in C++ inheritance.

Description:
This program demonstrates how protected members of
a base class can be accessed directly inside the
derived class but cannot be accessed outside the class.

Working:
1. Create a base class Person.
2. Declare protected data members.
3. Create a derived class Student.
4. Access protected members directly.
5. Display student information.

Concepts Covered:
- Protected Access Specifier
- Inheritance
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
};

// Derived Class
class Student : public Person
{
private:
    int rollNo;
    float marks;

public:

    void input()
    {
        cout << "Enter Name : ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age : ";
        cin >> age;

        cout << "Enter Roll Number : ";
        cin >> rollNo;

        cout << "Enter Marks : ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n========== Student Details ==========\n";

        cout << "Name        : " << name << endl;
        cout << "Age         : " << age << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main()
{
    Student student1;

    student1.input();

    student1.display();

    return 0;
}
