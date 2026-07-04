/*
------------------------------------------------------------
Title       : Object as Function Argument using C++
Folder      : 01-classes-and-objects
File        : object_as_function_argument.cpp

Purpose:
To understand how an object can be passed as an
argument to a function.

Description:
This program creates a Student class. An object of
the class is passed to another function, where the
student details are displayed.

Working:
1. Create a Student class.
2. Accept student details.
3. Pass the Student object to a function.
4. Display the object data inside the function.

Concepts Covered:
- Class
- Object
- Function
- Object as Function Argument
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

void showStudent(Student s)
{
    cout << "\nObject received by function.\n";
    s.display();
}

int main()
{
    Student student1;

    student1.input();

    showStudent(student1);

    return 0;
}
