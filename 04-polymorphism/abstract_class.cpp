/*
------------------------------------------------------------
Title       : Abstract Class using C++
Folder      : 04-polymorphism
File        : abstract_class.cpp

Purpose:
To understand the concept of Abstract Classes
in C++.

Description:
This program demonstrates how an abstract class
acts as a blueprint for derived classes. The
derived classes must implement all pure virtual
functions.

Working:
1. Create an abstract class Employee.
2. Declare a pure virtual function calculateSalary().
3. Create FullTimeEmployee and PartTimeEmployee classes.
4. Implement calculateSalary() in derived classes.
5. Display salary details.

Concepts Covered:
- Abstract Class
- Pure Virtual Function
- Runtime Polymorphism
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

// Abstract Base Class
class Employee
{
protected:
    string name;

public:

    Employee(string n)
    {
        name = n;
    }

    virtual void calculateSalary() = 0;

    void displayName()
    {
        cout << "Employee Name : " << name << endl;
    }
};

// Derived Class
class FullTimeEmployee : public Employee
{
private:
    float monthlySalary;

public:

    FullTimeEmployee(string n, float salary)
        : Employee(n)
    {
        monthlySalary = salary;
    }

    void calculateSalary() override
    {
        displayName();
        cout << "Monthly Salary : Rs. "
             << monthlySalary << endl;
    }
};

// Derived Class
class PartTimeEmployee : public Employee
{
private:
    int hoursWorked;
    float hourlyRate;

public:

    PartTimeEmployee(string n, int hours, float rate)
        : Employee(n)
    {
        hoursWorked = hours;
        hourlyRate = rate;
    }

    void calculateSalary() override
    {
        displayName();

        cout << "Total Salary : Rs. "
             << hoursWorked * hourlyRate << endl;
    }
};

int main()
{
    Employee *employee;

    FullTimeEmployee fullTime("Prince Sharma", 50000);

    PartTimeEmployee partTime("Rahul Kumar", 120, 250);

    cout << "\n===== Full-Time Employee =====\n";

    employee = &fullTime;
    employee->calculateSalary();

    cout << "\n===== Part-Time Employee =====\n";

    employee = &partTime;
    employee->calculateSalary();

    return 0;
}
