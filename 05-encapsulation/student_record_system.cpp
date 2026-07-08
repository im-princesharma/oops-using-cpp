/*
------------------------------------------------------------
Title       : Student Record System using C++
Folder      : 05-encapsulation
File        : student_record_system.cpp

Purpose:
To understand Encapsulation through a Student
Record Management System.

Description:
This program demonstrates how student information
is stored securely using private data members.
Public member functions are used to set, retrieve,
and calculate the student's percentage.

Working:
1. Create a Student class.
2. Store student details privately.
3. Set student information.
4. Calculate percentage.
5. Display the complete student record.

Concepts Covered:
- Encapsulation
- Data Hiding
- Getter and Setter Methods
- Student Record Management
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
    float marks1;
    float marks2;
    float marks3;

public:

    void setStudent(int r, string n, float m1, float m2, float m3)
    {
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    float calculatePercentage()
    {
        return (marks1 + marks2 + marks3) / 3;
    }

    void displayRecord()
    {
        cout << "\n===== Student Record =====" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks 1     : " << marks1 << endl;
        cout << "Marks 2     : " << marks2 << endl;
        cout << "Marks 3     : " << marks3 << endl;
        cout << "Percentage  : " << calculatePercentage() << "%" << endl;
    }
};

int main()
{
    Student student;

    student.setStudent(101, "Prince Sharma", 95, 92, 98);

    student.displayRecord();

    return 0;
}
