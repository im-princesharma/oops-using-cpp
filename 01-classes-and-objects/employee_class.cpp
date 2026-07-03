/*
------------------------------------------------------------
Title       : Employee Class using C++
Author      : Prince Sharma
Repository  : oops-using-cpp
Folder      : 01-classes-and-objects
File        : 02_employee_class.cpp

Description:
This program demonstrates the concept of Classes and
Objects by creating an Employee class.

Concepts Covered:
- Class
- Object
- Private Data Members
- Public Member Functions
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    int empId;
    string empName;
    string department;
    float salary;

public:
    void input()
    {
        cout << "Enter Employee ID : ";
        cin >> empId;

        cin.ignore();

        cout << "Enter Employee Name : ";
        getline(cin, empName);

        cout << "Enter Department : ";
        getline(cin, department);

        cout << "Enter Salary : ";
        cin >> salary;
    }

    void display()
    {
        cout << "\n========== Employee Details ==========\n";
        cout << "Employee ID : " << empId << endl;
        cout << "Name        : " << empName << endl;
        cout << "Department  : " << department << endl;
        cout << "Salary      : Rs. " << salary << endl;
    }
};

int main()
{
    Employee emp1;

    emp1.input();

    emp1.display();

    return 0;
}