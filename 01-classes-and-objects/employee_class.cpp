/*
------------------------------------------------------------
Title       : Employee Class using C++
Folder      : 01-classes-and-objects
File        : employee_class.cpp

Purpose:
To understand the concept of Classes and Objects by
creating an Employee class.

Description:
This program creates an Employee class that stores
employee information and displays it using member
functions.

Working:
1. Create an Employee class.
2. Declare private data members.
3. Create public member functions.
4. Accept employee details from the user.
5. Display employee information.

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

class Employee
{
private:
    int employeeID;
    string employeeName;
    string department;
    float salary;

public:
    void input()
    {
        cout << "Enter Employee ID : ";
        cin >> employeeID;

        cin.ignore();

        cout << "Enter Employee Name : ";
        getline(cin, employeeName);

        cout << "Enter Department : ";
        getline(cin, department);

        cout << "Enter Salary : ";
        cin >> salary;
    }

    void display()
    {
        cout << "\n========== Employee Details ==========\n";

        cout << "Employee ID : " << employeeID << endl;
        cout << "Employee Name : " << employeeName << endl;
        cout << "Department : " << department << endl;
        cout << "Salary : Rs. " << salary << endl;
    }
};

int main()
{
    Employee emp1;

    emp1.input();

    emp1.display();

    return 0;
}