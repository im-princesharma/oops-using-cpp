/*     
------------------------------------------------------------        
Title       : Constructor and Destructor Order using C++   
Folder      : 02-constructors-and-destructors      
File        : constructor_destructor_order.cpp     
   
Purpose:
To understand the order in which constructors and 
destructors are executed.
 
Description: 
This program creates multiple objects of a class. 
Constructors are called in the order objects are 
created, while destructors are called in the reverse 
order when the program ends.
 
Working:
1. Create a Student class.
2. Define a constructor.
3. Define a destructor.
4. Create multiple objects.  
5. Observe the execution order.

Concepts Covered:
- Constructor
- Destructor
- Object Lifetime
- Constructor Execution Order
- Destructor Execution Order
------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:

    Student(int r, string n)
    {
        rollNo = r;
        name = n;

        cout << "Constructor Called -> "
             << name << endl;
    }

    void display()
    {
        cout << "\nStudent Details\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
    }

    ~Student()
    {
        cout << "Destructor Called -> "
             << name << endl;
    }
};

int main()
{
    Student student1(101, "Prince Sharma");
    Student student2(102, "Rahul");
    Student student3(103, "Aman");

    cout << "\nDisplaying Student Details\n";

    student1.display();
    student2.display();
    student3.display();

    cout << "\nEnd of main() Function\n";

    return 0;
}
