/*
------------------------------------------------------------
Title       : Data Hiding using C++
Folder      : 05-encapsulation
File        : data_hiding.cpp

Purpose:
To understand the concept of Data Hiding using
Encapsulation in C++.

Description:
This program demonstrates how private data members
cannot be accessed directly from outside the class.
Public member functions are used to access and
modify the hidden data safely.

Working:
1. Create a Person class.
2. Keep age as a private data member.
3. Use setter function to assign age.
4. Use getter function to display age.
5. Prevent direct access to age.

Concepts Covered:
- Encapsulation
- Data Hiding
- Private Data Members
- Getter and Setter Functions
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:

    void setPerson(string n, int a)
    {
        name = n;

        if (a >= 0)
            age = a;
        else
            age = 0;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Person person;

    person.setPerson("Prince Sharma", 20);

    cout << "===== Person Details =====" << endl;

    cout << "Name : " << person.getName() << endl;
    cout << "Age  : " << person.getAge() << endl;

    // person.age = 25;   // ❌ Not Allowed (Private Member)

    return 0;
}
