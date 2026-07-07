/*
------------------------------------------------------------
Title       : Car Class using C++
Folder      : 01-classes-and-objects
File        : car_class.cpp  

Purpose: 
To understand the concept of Classes and Objects by  
creating a Car class.

Description:
This program creates a Car class that stores car
information and displays it using member functions.

Working:
1. Create a Car class.
2. Declare private data members.
3. Create public member functions.
4. Accept car details from the user.
5. Display car information. 

Concepts Covered:
- Class
- Object
- Private Data Members
- Public Member Functions
- Basic Encapsulation
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    int carID;
    string brand;
    string model;
    int year;
    float price;

public:
    void input()
    {
        cout << "Enter Car ID : ";
        cin >> carID;

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

        cout << "Car ID : " << carID << endl;
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Manufacturing Year : " << year << endl;
        cout << "Price : Rs. " << price << endl;
    }
};

int main()
{
    Car car1;

    car1.input();

    car1.display();

    return 0;
}
