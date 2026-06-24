/*
==================================================
Title   : Car Class
Purpose : Demonstrate class methods.
Working :
1. Store car information.
2. Use member functions.
3. Display car details.
==================================================
*/

#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int year;

public:
    void setData()
    {
        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Model: ";
        cin >> model;

        cout << "Enter Manufacturing Year: ";
        cin >> year;
    }

    void showData()
    {
        cout << "\n----- Car Details -----\n";
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Year  : " << year << endl;
    }
};

int main()
{
    Car c1;

    c1.setData();
    c1.showData();

    return 0;
}