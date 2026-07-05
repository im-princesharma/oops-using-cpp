/*
------------------------------------------------------------
Title       : Runtime Polymorphism using C++
Folder      : 04-polymorphism
File        : runtime_polymorphism.cpp

Purpose:
To understand Runtime Polymorphism in C++ using
virtual functions and base class pointers.

Description:
This program demonstrates how a base class pointer
can invoke different overridden functions at runtime
depending on the object it points to.

Working:
1. Create a base class Vehicle.
2. Declare a virtual function start().
3. Create Car and Bike classes.
4. Override start() in both classes.
5. Use a base class pointer to call functions.

Concepts Covered:
- Runtime Polymorphism
- Virtual Function
- Dynamic Binding
- Base Class Pointer
------------------------------------------------------------
*/

#include <iostream>

using namespace std;

// Base Class
class Vehicle
{
public:

    virtual void start()
    {
        cout << "Vehicle is starting..." << endl;
    }

    virtual ~Vehicle() {}
};

// Derived Class
class Car : public Vehicle
{
public:

    void start() override
    {
        cout << "Car starts with a key." << endl;
    }
};

// Derived Class
class Bike : public Vehicle
{
public:

    void start() override
    {
        cout << "Bike starts with a self-start button." << endl;
    }
};

int main()
{
    Vehicle *vehicle;

    Car car;
    Bike bike;

    cout << "Car Object:" << endl;
    vehicle = &car;
    vehicle->start();

    cout << "\nBike Object:" << endl;
    vehicle = &bike;
    vehicle->start();

    return 0;
}
