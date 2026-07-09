/*
------------------------------------------------------------
Title       : Real-World Encapsulation Example 
Folder      : 05-encapsulation   
File        : encapsulation_real_world.cpp    
     
Purpose:     
To demonstrate Encapsulation using a real-world  
ATM Account Management System.     
  
Description:
This program shows how account information is 
protected using private data members while
public member functions provide secure banking
operations such as deposit, withdrawal and
balance enquiry.
  
Working:
1. Create an ATMAccount class.
2. Keep account details private.
3. Deposit money.
4. Withdraw money after validation.
5. Display account information.

Concepts Covered:
- Encapsulation
- Data Hiding
- Getter and Setter Methods
- Real-world OOP Design
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std; 

class ATMAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:

    void createAccount(int number, string holder, double amount)
    {
        accountNumber = number;
        accountHolder = holder;
        balance = amount;
    }

    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "Rs. " << amount
                 << " deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount)
    {
        if(amount <= 0)
        {
            cout << "Invalid withdrawal amount." << endl;
        }
        else if(amount > balance)
        {
            cout << "Insufficient Balance!" << endl;
        }
        else
        {
            balance -= amount;

            cout << "Rs. " << amount
                 << " withdrawn successfully." << endl;
        }
    }

    void displayAccount()
    {
        cout << "\n===== ATM Account Details =====" << endl;

        cout << "Account Number : "
             << accountNumber << endl;

        cout << "Account Holder : "
             << accountHolder << endl;

        cout << "Available Balance : Rs. "
             << balance << endl;
    }
};

int main()
{
    ATMAccount account;

    account.createAccount(
        123456789,
        "Prince Sharma",
        25000
    );

    account.displayAccount();

    cout << endl;

    account.deposit(5000);

    account.withdraw(7000);

    account.displayAccount();

    return 0;
}
