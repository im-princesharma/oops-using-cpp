/*
------------------------------------------------------------
Title       : Employee Salary using Encapsulation
Folder      : 05-encapsulation
File        : employee_salary.cpp

Purpose:
To understand Encapsulation by securely managing
employee salary information.

Description:
This program demonstrates how salary can be
protected using private data members and updated
through public member functions with validation.

Working:
1. Create an Employee class.
2. Store employee details privately.
3. Set employee information.
4. Increase salary using a public function.
5. Display updated employee details.

Concepts Covered:
- Encapsulation
- Data Hiding
- Getter and Setter Methods
- Salary Management
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    int employeeId;
    string employeeName;
    double salary;

public:

    void setEmployee(int id, string name, double s)
    {
        employeeId = id;
        employeeName = name;

        if (s >= 0)
            salary = s;
        else
            salary = 0;
    }

    void increaseSalary(double amount)
    {
        if (amount > 0)
        {
            salary += amount;
            cout << "Salary increased successfully." << endl;
        }
        else
        {
            cout << "Invalid salary increment." << endl;
        }
    }

    void displayEmployee()
    {
        cout << "\n===== Employee Details =====" << endl;
        cout << "Employee ID   : " << employeeId << endl;
        cout << "Employee Name : " << employeeName << endl;
        cout << "Salary        : Rs. " << salary << endl;
    }
};

int main()
{
    Employee employee;

    employee.setEmployee(101, "Prince Sharma", 50000);

    employee.displayEmployee();

    employee.increaseSalary(5000);

    employee.displayEmployee();

    return 0;
}
