/*
------------------------------------------------------------
Title       : Compile-Time Polymorphism using C++
Folder      : 04-polymorphism
File        : compile_time_polymorphism.cpp

Purpose:
To understand Compile-Time Polymorphism using
Function Overloading.

Description:
This program demonstrates how the compiler selects
the appropriate overloaded function based on the
number and type of arguments.

Working:
1. Create a Calculator class.
2. Overload the calculate() function.
3. Call overloaded functions with different parameters.
4. Display the results.

Concepts Covered:
- Compile-Time Polymorphism
- Function Overloading
- Static Binding
------------------------------------------------------------
*/

#include <iostream>

using namespace std;

class Calculator
{
public:

    int calculate(int a, int b)
    {
        return a + b;
    }

    int calculate(int a, int b, int c)
    {
        return a + b + c;
    }

    double calculate(double a, double b)
    {
        return a + b;
    }

    int calculate(int a, int b, char operation)
    {
        if (operation == '+')
            return a + b;

        if (operation == '-')
            return a - b;

        if (operation == '*')
            return a * b;

        if (operation == '/')
            return a / b;

        return 0;
    }
};

int main()
{
    Calculator calculator;

    cout << "Addition of Two Integers : "
         << calculator.calculate(10, 20) << endl;

    cout << "Addition of Three Integers : "
         << calculator.calculate(10, 20, 30) << endl;

    cout << "Addition of Two Double Values : "
         << calculator.calculate(10.5, 20.3) << endl;

    cout << "Multiplication : "
         << calculator.calculate(10, 5, '*') << endl;

    return 0;
}