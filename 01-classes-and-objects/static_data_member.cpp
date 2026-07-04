/*
------------------------------------------------------------
Title       : Static Data Member using C++
Folder      : 01-classes-and-objects
File        : static_data_member.cpp

Purpose:
To understand the concept of Static Data Members and
Static Member Functions in C++.

Description:
This program demonstrates how a static data member is
shared among all objects of a class and how a static
member function can access it.

Working:
1. Create an Employee class.
2. Declare a static data member.
3. Increment employee count whenever an object is created.
4. Display employee details.
5. Display the total number of employees using a static
   member function.

Concepts Covered:
- Class
- Object
- Static Data Member
- Static Member Function
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;

    static int employeeCount;

public:

    Employee(int id, string name)
    {
        employeeID = id;
        employeeName = name;
        employeeCount++;
    }

    void display()
    {
        cout << "\nEmployee ID   : " << employeeID << endl;
        cout << "Employee Name : " << employeeName << endl;
    }

    static void totalEmployees()
    {
        cout << "\nTotal Employees Created : "
             << employeeCount << endl;
    }
};

int Employee::employeeCount = 0;

int main()
{
    Employee emp1(101, "Prince Sharma");
    Employee emp2(102, "Rahul");
    Employee emp3(103, "Aman");

    emp1.display();
    emp2.display();
    emp3.display();

    Employee::totalEmployees();

    return 0;
}
