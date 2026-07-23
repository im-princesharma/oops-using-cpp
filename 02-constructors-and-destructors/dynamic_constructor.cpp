/*
------------------------------------------------------------    
Title       : Dynamic Constructor using C++ 
Folder      : 02-constructors-and-destructors 
File        : dynamic_constructor.cpp

Purpose:
To understand the concept of Dynamic Constructor
using dynamic memory allocation.

Description:
This program demonstrates how memory can be allocated
dynamically inside a constructor using the new operator
and released using the destructor.

Working:
1. Create a Student class.
2. Allocate memory dynamically inside constructor.
3. Store roll number and name.
4. Display the details.
5. Free allocated memory in destructor.

Concepts Covered:
- Constructor
- Dynamic Memory Allocation
- new Operator
- delete Operator
- Destructor
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int *rollNo;
    string *name;

public:

    // Dynamic Constructor
    Student(int r, string n)
    {
        rollNo = new int;
        name = new string;

        *rollNo = r;
        *name = n;

        cout << "Dynamic Constructor Called Successfully.\n";
    }

    void display()
    {
        cout << "\n========== Student Details ==========\n";
        cout << "Roll Number : " << *rollNo << endl;
        cout << "Name        : " << *name << endl;
    }

    // Destructor
    ~Student()
    {
        delete rollNo;
        delete name;

        cout << "\nMemory Released Successfully.\n";
    }
};

int main()
{
    Student student1(101, "Prince Sharma");

    student1.display();

    return 0;
}
