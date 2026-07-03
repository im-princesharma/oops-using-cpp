/*
------------------------------------------------------------
Title       : Student Class using C++
Author      : Prince Sharma
Repository  : oops-using-cpp
Folder      : 01-classes-and-objects
File        : student_class.cpp

Description:
This program demonstrates the concept of Classes and Objects
by creating a Student class with data members and member
functions.

Concepts Covered:
- Class
- Object
- Data Members
- Member Functions
- Object Creation

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

        cout << "Enter Name : ";
        getline(cin, name);

        cout << "Enter Marks : ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n------ Student Details ------\n";
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
