/*
------------------------------------------------------------
Title       : Function Overloading using C++
Folder      : 04-polymorphism
File        : function_overloading.cpp

Purpose:
To understand Compile-Time Polymorphism using
Function Overloading.

Description:
This program demonstrates how multiple functions
can have the same name but different parameter
lists.

Working:
1. Create a Calculator class.
2. Define multiple add() functions.
3. Call different overloaded functions.
4. Display the results.

Concepts Covered:
- Compile-Time Polymorphism
- Function Overloading
------------------------------------------------------------
*/

#include <iostream>

using namespace std;

class Calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    float add(float a, float b)
    {
        return a + b;
    }
};

int main()
{
    Calculator calculator;

    cout << "Addition of Two Integers : "
         << calculator.add(10, 20) << endl;

    cout << "Addition of Three Integers : "
         << calculator.add(10, 20, 30) << endl;

    cout << "Addition of Two Float Numbers : "
         << calculator.add(10.5f, 20.3f) << endl;

    return 0;
}