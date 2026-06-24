/*
==================================================
Title   : Rectangle Class
Purpose : Calculate area using class and object.
Working :
1. Store length and breadth.
2. Calculate area.
3. Display area.
==================================================
*/

#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    void input()
    {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Breadth: ";
        cin >> breadth;
    }

    float calculateArea()
    {
        return length * breadth;
    }

    void display()
    {
        cout << "\nArea of Rectangle = "
             << calculateArea() << endl;
    }
};

int main()
{
    Rectangle r;

    r.input();
    r.display();

    return 0;
}
