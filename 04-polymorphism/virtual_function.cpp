/*
------------------------------------------------------------
Title       : Virtual Function using C++
Folder      : 04-polymorphism
File        : virtual_function.cpp

Purpose:
To understand the concept of Virtual Functions
in C++.

Description:
This program demonstrates how a virtual function
enables runtime polymorphism by calling the
appropriate function based on the object type.

Working:
1. Create a base class Animal.
2. Declare a virtual function sound().
3. Create derived classes Dog and Cat.
4. Access objects using a base class pointer.
5. Observe runtime function dispatch.

Concepts Covered:
- Virtual Function
- Runtime Polymorphism
- Dynamic Binding
------------------------------------------------------------
*/

#include <iostream>

using namespace std;

// Base Class
class Animal
{
public:

    virtual void sound()
    {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived Class
class Dog : public Animal
{
public:

    void sound() override
    {
        cout << "Dog barks." << endl;
    }
};

// Derived Class
class Cat : public Animal
{
public:

    void sound() override
    {
        cout << "Cat meows." << endl;
    }
};

int main()
{
    Animal *ptr;

    Dog dog;
    Cat cat;

    ptr = &dog;
    ptr->sound();

    ptr = &cat;
    ptr->sound();

    return 0;
}
