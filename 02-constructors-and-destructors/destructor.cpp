/*
------------------------------------------------------------
Title       : Destructor using C++
Folder      : 02-constructors-and-destructors
File        : destructor.cpp  

Purpose: 
To understand the concept of a Destructor in C++.  

Description:   
This program demonstrates how a destructor is
automatically called when an object goes out of scope
or when the program terminates.

Working:
1. Create a Student class.
2. Define a constructor.
3. Define a destructor.
4. Create an object.
5. Observe the order of constructor and destructor calls.

Concepts Covered:
- Constructor
- Destructor
- Automatic Memory Cleanup
- Object Lifetime
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

public:

    // Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;

        cout << "Constructor Called.\n";
    }

    void display()
    {
        cout << "\n========== Student Details ==========\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "\nDestructor Called. Object Destroyed Successfully.\n";
    }
};

int main()
{
    Student student1(101, "Prince Sharma");

    student1.display();

    cout << "\nEnd of main() Function.\n";

    return 0;
}
