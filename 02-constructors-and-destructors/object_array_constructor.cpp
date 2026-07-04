/*
------------------------------------------------------------
Title       : Object Array with Constructors using C++
Folder      : 02-constructors-and-destructors
File        : object_array_constructor.cpp

Purpose:
To understand how constructors are automatically called
for every object in an array.

Description:
This program demonstrates the creation of an array of
Student objects. Each object's constructor is invoked
automatically, and the user enters details for every
student.

Working:
1. Create a Student class.
2. Define a default constructor.
3. Create an array of Student objects.
4. Input details for each object.
5. Display all student records.

Concepts Covered:
- Constructor
- Default Constructor
- Array of Objects
- Object Initialization
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

    // Default Constructor
    Student()
    {
        rollNo = 0;
        name = "Not Assigned";
        marks = 0;

        cout << "Default Constructor Called.\n";
    }

    void input()
    {
        cout << "\nEnter Roll Number : ";
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
    const int SIZE = 3;

    Student students[SIZE];

    cout << "\n===== Enter Student Details =====\n";

    for(int i = 0; i < SIZE; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        students[i].input();
    }

    cout << "\n===== Student Records =====\n";

    for(int i = 0; i < SIZE; i++)
    {
        students[i].display();
    }

    return 0;
}
