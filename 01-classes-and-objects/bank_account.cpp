/*
==================================================
Title   : Bank Account
Purpose : Simulate a simple bank account.
Working :
1. Create account.
2. Deposit money.
3. Withdraw money.
4. Display balance.
==================================================
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
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolder);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void withdraw(float amount)
    {
        if(amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient Balance\n";
        }
    }

    void display()
    {
        cout << "\n----- Account Details -----\n";
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    BankAccount acc;

    acc.createAccount();

    acc.deposit(1000);
    acc.withdraw(500);

    acc.display();

    return 0;
}
