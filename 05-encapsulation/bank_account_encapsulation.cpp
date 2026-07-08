/*
------------------------------------------------------------
Title       : Bank Account using Encapsulation
Folder      : 05-encapsulation
File        : bank_account_encapsulation.cpp

Purpose:
To understand Encapsulation through a real-world
Bank Account example.

Description:
This program demonstrates how private data members
protect sensitive information such as account
number and balance. Public member functions are
used to perform banking operations securely.

Working:
1. Create a BankAccount class.
2. Keep account details private.
3. Deposit money.
4. Withdraw money.
5. Display account details.

Concepts Covered:
- Encapsulation
- Data Hiding
- Getter Functions
- Setter Functions
- Real-world OOP Example
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
    double balance;

public:

    void createAccount(int number, string name, double amount)
    {
        accountNumber = number;
        accountHolder = name;
        balance = amount;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Rs. " << amount << " deposited successfully." << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Rs. " << amount << " withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void displayAccount()
    {
        cout << "\n===== Account Details =====" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.createAccount(123456, "Prince Sharma", 10000);

    account.displayAccount();

    account.deposit(5000);

    account.withdraw(3000);

    account.displayAccount();

    return 0;
}
