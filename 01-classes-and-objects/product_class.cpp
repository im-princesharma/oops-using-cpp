/*
------------------------------------------------------------
Title       : Product Class using C++
Folder      : 01-classes-and-objects
File        : product_class.cpp

Purpose:
To understand how a class can perform calculations
using object data.

Description:
This program creates a Product class that stores product
details, calculates the total amount based on quantity
and unit price, and displays the complete information.

Working:
1. Create a Product class.
2. Declare private data members.
3. Accept product information.
4. Calculate total amount.
5. Display product details.

Concepts Covered:
- Class
- Object
- Data Members
- Member Functions
- Calculation using Class Members
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
    int productID;
    string productName;
    float unitPrice;
    int quantity;

public:
    void input()
    {
        cout << "Enter Product ID : ";
        cin >> productID;

        cin.ignore();

        cout << "Enter Product Name : ";
        getline(cin, productName);

        cout << "Enter Unit Price : ";
        cin >> unitPrice;

        cout << "Enter Quantity : ";
        cin >> quantity;
    }

    float totalAmount()
    {
        return unitPrice * quantity;
    }

    void display()
    {
        cout << "\n========== Product Details ==========\n";

        cout << "Product ID   : " << productID << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Unit Price   : Rs. " << unitPrice << endl;
        cout << "Quantity     : " << quantity << endl;
        cout << "Total Amount : Rs. " << totalAmount() << endl;
    }
};

int main()
{
    Product product1;

    product1.input();

    product1.display();

    return 0;
}
