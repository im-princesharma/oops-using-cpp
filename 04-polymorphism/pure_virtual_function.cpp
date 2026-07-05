/*
------------------------------------------------------------
Title       : Pure Virtual Function using C++
Folder      : 04-polymorphism
File        : pure_virtual_function.cpp

Purpose:
To understand the concept of Pure Virtual
Functions in C++.

Description:
This program demonstrates how a pure virtual
function makes a class abstract and forces
derived classes to implement the function.

Working:
1. Create an abstract base class Shape.
2. Declare a pure virtual function area().
3. Create derived classes Rectangle and Circle.
4. Implement area() in derived classes.
5. Display calculated areas.

Concepts Covered:
- Pure Virtual Function
- Abstract Class
- Runtime Polymorphism
------------------------------------------------------------
*/

#include <iostream>

using namespace std;

// Abstract Base Class
class Shape
{
public:

    virtual void area() = 0;
};

// Derived Class
class Rectangle : public Shape
{
private:
    float length;
    float width;

public:

    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void area() override
    {
        cout << "Area of Rectangle : "
             << length * width << endl;
    }
};

// Derived Class
class Circle : public Shape
{
private:
    float radius;

public:

    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Area of Circle : "
             << 3.14159 * radius * radius << endl;
    }
};

int main()
{
    Shape *ptr;

    Rectangle rectangle(10, 5);

    Circle circle(7);

    ptr = &rectangle;
    ptr->area();

    ptr = &circle;
    ptr->area();

    return 0;
}
