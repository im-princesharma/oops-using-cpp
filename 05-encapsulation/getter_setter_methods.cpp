/*
------------------------------------------------------------
Title       : Getter and Setter Methods using C++
Folder      : 05-encapsulation
File        : getter_setter_methods.cpp

Purpose:
To understand the use of Getter and Setter
Methods in Encapsulation.

Description:
This program demonstrates how getter and setter
methods provide controlled access to private
data members.

Working:
1. Create an Employee class.
2. Keep all data members private.
3. Use setter methods to assign values.
4. Use getter methods to retrieve values.
5. Display employee information.

Concepts Covered:
- Encapsulation
- Getter Methods
- Setter Methods
- Data Hiding
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

    void setEmployeeId(int id)
    {
        employeeId = id;
    }

    void setEmployeeName(string name)
    {
        employeeName = name;
    }

    void setSalary(double s)
    {
        salary = s;
    }

    int getEmployeeId()
    {
        return employeeId;
    }

    string getEmployeeName()
    {
        return employeeName;
    }

    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee employee;

    employee.setEmployeeId(1001);
    employee.setEmployeeName("Prince Sharma");
    employee.setSalary(50000);

    cout << "===== Employee Details =====" << endl;

    cout << "Employee ID   : " << employee.getEmployeeId() << endl;
    cout << "Employee Name : " << employee.getEmployeeName() << endl;
    cout << "Salary        : Rs. " << employee.getSalary() << endl;

    return 0;
}
