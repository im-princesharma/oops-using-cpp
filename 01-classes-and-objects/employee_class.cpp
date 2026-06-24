/*
==================================================
Title   : Employee Class
Purpose : Demonstrate multiple objects in C++.
Working :
1. Create Employee class.
2. Store employee details.
3. Create multiple objects.
4. Display employee information.
==================================================
*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    string empName;
    float salary;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, empName);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee ID   : " << empId << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Salary        : " << salary << endl;
    }
};

int main()
{
    Employee e1, e2;

    cout << "\nEnter Details of Employee 1\n";
    e1.input();

    cout << "\nEnter Details of Employee 2\n";
    e2.input();

    cout << "\nEmployee Records\n";

    e1.display();
    e2.display();

    return 0;
}
