/*
------------------------------------------------------------
Title       : Validation using Setter Methods
Folder      : 05-encapsulation
File        : validation_using_setter.cpp

Purpose:
To understand how Setter Methods can validate
user input before storing it.

Description:
This program demonstrates how setter methods
prevent invalid values such as negative age
or marks greater than 100.

Working:
1. Create a Student class.
2. Keep age and marks private.
3. Validate input using setter methods.
4. Display student details.

Concepts Covered:
- Encapsulation
- Setter Validation
- Data Hiding
- Input Validation
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int age;
    float marks;

public:

    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        if (a >= 0 && a <= 120)
            age = a;
        else
        {
            cout << "Invalid Age! Setting age to 0." << endl;
            age = 0;
        }
    }

    void setMarks(float m)
    {
        if (m >= 0 && m <= 100)
            marks = m;
        else
        {
            cout << "Invalid Marks! Setting marks to 0." << endl;
            marks = 0;
        }
    }

    void display()
    {
        cout << "\n===== Student Details =====" << endl;
        cout << "Name  : " << name << endl;
        cout << "Age   : " << age << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student student;

    student.setName("Prince Sharma");

    student.setAge(20);

    student.setMarks(95);

    student.display();

    return 0;
}
