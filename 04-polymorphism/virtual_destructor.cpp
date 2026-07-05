/*
------------------------------------------------------------
Title       : Virtual Destructor using C++
Folder      : 04-polymorphism
File        : virtual_destructor.cpp

Purpose:
To understand the importance of Virtual
Destructors in C++.

Description:
This program demonstrates how declaring a base
class destructor as virtual ensures that both
derived and base class destructors are called
when deleting an object through a base class
pointer.

Working:
1. Create a base class Animal.
2. Declare a virtual destructor.
3. Create a derived class Dog.
4. Allocate memory dynamically.
5. Delete object using base class pointer.

Concepts Covered:
- Virtual Destructor
- Runtime Polymorphism
- Dynamic Memory Allocation
- Destructor Chaining
------------------------------------------------------------
*/

#include <iostream>

using namespace std;

// Base Class
class Animal
{
public:

    Animal()
    {
        cout << "Animal Constructor Called" << endl;
    }

    virtual ~Animal()
    {
        cout << "Animal Destructor Called" << endl;
    }
};

// Derived Class
class Dog : public Animal
{
public:

    Dog()
    {
        cout << "Dog Constructor Called" << endl;
    }

    ~Dog()
    {
        cout << "Dog Destructor Called" << endl;
    }
};

int main()
{
    Animal *ptr;

    ptr = new Dog();

    cout << "\nDeleting Object...\n" << endl;

    delete ptr;

    return 0;
}
