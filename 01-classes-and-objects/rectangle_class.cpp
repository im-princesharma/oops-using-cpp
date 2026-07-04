/*
------------------------------------------------------------
Title       : Rectangle Class using C++
Folder      : 01-classes-and-objects
File        : rectangle_class.cpp

Purpose:
To understand how member functions perform calculations
using object data.

Description:
This program creates a Rectangle class that accepts
length and width from the user and calculates the
area and perimeter.

Working:
1. Create a Rectangle class.
2. Declare length and width as private data members.
3. Accept rectangle dimensions.
4. Calculate area and perimeter.
5. Display the results.

Concepts Covered:
- Class
- Object
- Member Functions
- Data Members
- Area Calculation
- Perimeter Calculation
------------------------------------------------------------
*/

#include <iostream>

using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    void input()
    {
        cout << "Enter Length : ";
        cin >> length;

        cout << "Enter Width : ";
        cin >> width;
    }

    float area()
    {
        return length * width;
    }

    float perimeter()
    {
        return 2 * (length + width);
    }

    void display()
    {
        cout << "\n========== Rectangle Details ==========\n";

        cout << "Length    : " << length << endl;
        cout << "Width     : " << width << endl;
        cout << "Area      : " << area() << endl;
        cout << "Perimeter : " << perimeter() << endl;
    }
};

int main()
{
    Rectangle rect;

    rect.input();

    rect.display();

    return 0;
}