/*
------------------------------------------------------------
Title       : Student Class using C++
Folder      : 01-classes-and-objects
File        : student_class.cpp

Purpose:
To understand the basic concept of Classes and Objects
by creating a Student class.

Description:
This program creates a Student class with private data
members and public member functions. It accepts student
details from the user and displays them.

Working:
1. Create a Student class.
2. Declare private data members.
3. Create public member functions.
4. Accept student details.
5. Display student information.

Concepts Covered:
- Class
- Object
- Private Data Members
- Public Member Functions
- Basic Encapsulation
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll Number : ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Student Name : ";
        getline(cin, name);

        cout << "Enter Marks : ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n========== Student Details ==========\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
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