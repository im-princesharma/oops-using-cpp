/*  
------------------------------------------------------------          
Title       : Destructor in Inheritance using C++   
Folder      : 03-inheritance 
File        : destructor_in_inheritance.cpp

Purpose: 
To understand how destructors are executed
in inheritance. 

Description:
This program demonstrates that when a derived
class object is destroyed, the derived class
destructor is called first, followed by the
base class destructor.

Working:
1. Create a base class Person.
2. Create a derived class Student.
3. Define constructors and destructors.
4. Observe the destruction order.

Concepts Covered:
- Destructor
- Inheritance
- Destructor Chaining
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

public:

    Person(string n)
    {
        name = n;
        cout << "Person Constructor Called." << endl;
    }

    ~Person()
    {
        cout << "Person Destructor Called." << endl;
    }
};

// Derived Class
class Student : public Person
{
private:
    int rollNo;

public:

    Student(string n, int r)
        : Person(n)
    {
        rollNo = r;
        cout << "Student Constructor Called." << endl;
    }

    void display()
    {
        cout << "\n========== Student Details ==========\n";
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNo << endl;
    }

    ~Student()
    {
        cout << "Student Destructor Called." << endl;
    }
};

int main()
{
    Student student1("Prince Sharma", 101);

    student1.display();

    cout << "\nEnd of main() Function\n";

    return 0;
}
