/*
------------------------------------------------------------ 
Title       : Private Data Members using C++
Folder      : 05-encapsulation
File        : private_data_members.cpp 

Purpose:
To understand Encapsulation using Private
Data Members.

Description:
This program demonstrates how private data
members protect data from direct access.
Public member functions are used to access
and modify private data safely.

Working:
1. Create a Student class.
2. Keep data members private.
3. Use setter functions to store data.
4. Use getter functions to display data.

Concepts Covered:
- Encapsulation
- Private Data Members
- Getter Functions
- Setter Functions
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
    float marks;

public:

    void setData(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    int getRollNo()
    {
        return rollNo;
    }

    string getName()
    {
        return name;
    }

    float getMarks()
    {
        return marks;
    }
};

int main()
{
    Student student;

    student.setData(101, "Prince Sharma", 95.5);

    cout << "===== Student Details =====" << endl;

    cout << "Roll Number : " << student.getRollNo() << endl;
    cout << "Name        : " << student.getName() << endl;
    cout << "Marks       : " << student.getMarks() << endl;

    return 0;
}
