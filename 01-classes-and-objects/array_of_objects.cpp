/*
------------------------------------------------------------   
Title       : Array of Objects using C++    
Folder      : 01-classes-and-objects
File        : array_of_objects.cpp        
        
Purpose:          n
To understand how to create and use an array of              
objects in C++.     
   
Description:     
This program creates an array of Student objects, 
accepts details for multiple students, and displays 
their information.  

Working: 
1. Create a Student class.
2. Declare an array of Student objects.
3. Accept details for each student.
4. Display all student records.

Concepts Covered:
- Class
- Object
- Array of Objects
- Looping through Objects
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
    void input()
    {
        cout << "\nEnter Roll Number : ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Name : ";
        getline(cin, name);

        cout << "Enter Marks : ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n----------------------------\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main()
{
    Student students[3];

    cout << "===== Enter Student Details =====\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        students[i].input();
    }

    cout << "\n\n===== Student Records =====\n";

    for(int i = 0; i < 3; i++)
    {
        students[i].display();
    }

    return 0;
}
