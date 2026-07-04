/*
------------------------------------------------------------
Title       : Mobile Class using C++
Folder      : 01-classes-and-objects
File        : mobile_class.cpp

Purpose:
To understand the concept of Classes and Objects by
creating a Mobile class.

Description:
This program creates a Mobile class that stores mobile
phone details and displays them using member functions.

Working:
1. Create a Mobile class.
2. Declare private data members.
3. Create input() and display() functions.
4. Accept mobile details from the user.
5. Display the entered mobile information.

Concepts Covered:
- Class
- Object
- Private Data Members
- Public Member Functions
- String Handling
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Mobile
{
private:
    int mobileID;
    string brand;
    string model;
    int ram;
    int storage;
    float price;

public:
    void input()
    {
        cout << "Enter Mobile ID : ";
        cin >> mobileID;

        cin.ignore();

        cout << "Enter Brand : ";
        getline(cin, brand);

        cout << "Enter Model : ";
        getline(cin, model);

        cout << "Enter RAM (GB) : ";
        cin >> ram;

        cout << "Enter Storage (GB) : ";
        cin >> storage;

        cout << "Enter Price : ";
        cin >> price;
    }

    void display()
    {
        cout << "\n========== Mobile Details ==========\n";

        cout << "Mobile ID : " << mobileID << endl;
        cout << "Brand     : " << brand << endl;
        cout << "Model     : " << model << endl;
        cout << "RAM       : " << ram << " GB" << endl;
        cout << "Storage   : " << storage << " GB" << endl;
        cout << "Price     : Rs. " << price << endl;
    }
};

int main()
{
    Mobile mobile1;

    mobile1.input();

    mobile1.display();

    return 0;
}
