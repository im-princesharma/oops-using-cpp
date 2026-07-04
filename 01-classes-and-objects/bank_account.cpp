/*
------------------------------------------------------------
Title       : Bank Account Class using C++
Folder      : 01-classes-and-objects
File        : bank_account.cpp

Purpose:
To understand how member functions can perform
banking operations such as deposit and withdrawal.

Description:
This program creates a BankAccount class that stores
account information. It allows the user to deposit
and withdraw money while maintaining the account balance.

Working:
1. Create a BankAccount class.
2. Accept account details.
3. Display a menu.
4. Perform Deposit or Withdraw operation.
5. Display updated account information.

Concepts Covered:
- Class
- Object
- Data Members
- Member Functions
- Conditional Statements
- Basic Banking Operations
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    float balance;

public:

    void createAccount()
    {
        cout << "Enter Account Number : ";
        cin >> accountNumber;

        cin.ignore();

        cout << "Enter Account Holder Name : ";
        getline(cin, accountHolder);

        cout << "Enter Initial Balance : ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;

        cout << "\nEnter Amount to Deposit : ";
        cin >> amount;

        balance += amount;

        cout << "Amount Deposited Successfully.\n";
    }

    void withdraw()
    {
        float amount;

        cout << "\nEnter Amount to Withdraw : ";
        cin >> amount;

        if(amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully.\n";
        }
        else
        {
            cout << "Insufficient Balance.\n";
        }
    }

    void display()
    {
        cout << "\n========== Account Details ==========\n";

        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Available Balance : Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    int choice;

    account.createAccount();

    cout << "\n========== MENU ==========\n";
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "Enter Choice : ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            account.deposit();
            break;

        case 2:
            account.withdraw();
            break;

        default:
            cout << "Invalid Choice.\n";
    }

    account.display();

    return 0;
}
