/*
------------------------------------------------------------
Title       : Car Class using C++
Folder      : 01-classes-and-objects
File        : 03_car_class.cpp

Purpose:
To understand the concept of Classes and Objects by
creating a Car class.

Description:
This program creates a Car class with private data members
and public member functions. It accepts car details from
the user and displays them.

Working:
1. Create a Car class.
2. Declare private data members.
3. Create public member functions.
4. Accept car details from the user.
5. Display the entered details.

Concepts Covered:
- Class
- Object
- Private Data Members
- Public Member Functions
- Encapsulation (Basic)
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    int carId;
    string brand;
    string model;
    int year;
    float price;

public:
    void input()
    {
        cout << "Enter Car ID : ";
        cin >> carId;

        cin.ignore();

        cout << "Enter Brand : ";
        getline(cin, brand);

        cout << "Enter Model : ";
        getline(cin, model);

        cout << "Enter Manufacturing Year : ";
        cin >> year;

        cout << "Enter Price : ";
        cin >> price;
    }

    void display()
    {
        cout << "\n========== Car Details ==========\n";
        cout << "Car ID      : " << carId << endl;
        cout << "Brand       : " << brand << endl;
        cout << "Model       : " << model << endl;
        cout << "Year        : " << year << endl;
        cout << "Price       : Rs. " << price << endl;
    }
};

int main()
{
    Car car1;

    car1.input();

    car1.display();

    return 0;
}