/*
------------------------------------------------------------
Title       : Operator Overloading using C++
Folder      : 04-polymorphism
File        : operator_overloading.cpp

Purpose:
To understand Compile-Time Polymorphism using
Operator Overloading.

Description:
This program demonstrates how the '+' operator
can be overloaded to add two complex numbers.

Working:
1. Create a Complex class.
2. Store real and imaginary parts.
3. Overload the '+' operator.
4. Add two complex numbers.
5. Display the result.

Concepts Covered:
- Compile-Time Polymorphism
- Operator Overloading
- Friend Functions
------------------------------------------------------------
*/

#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:

    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }

    // Operator Overloading
    Complex operator+(Complex obj)
    {
        Complex temp;

        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;

        return temp;
    }

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1(10, 5);
    Complex c2(8, 3);

    Complex c3;

    c3 = c1 + c2;

    cout << "First Complex Number  : ";
    c1.display();

    cout << "Second Complex Number : ";
    c2.display();

    cout << "Result after Addition : ";
    c3.display();

    return 0;
}
