/*
==================================================
Title   : Student Class
Purpose : Demonstrate Class and Object concepts.
Working :
1. Create a Student class.
2. Store student details.
3. Accept data using member function.
4. Display student information.
==================================================
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
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n----- Student Details -----\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.input();
    s1.display();

    return 0;
}
