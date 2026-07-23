/*
------------------------------------------------------------
Title       : Create and Write File using C++
Folder      : 06-file-handling
File        : create_write_file.cpp

Purpose:
To understand how to create a file and write
data into it using file handling in C++.

Description:
This program demonstrates the use of ofstream
to create a text file and write information
into it.

Working:
1. Create an ofstream object.
2. Open or create a file.
3. Write data into the file.
4. Close the file.
5. Display a success message.

Concepts Covered:
- File Handling
- ofstream
- File Creation
- File Writing
------------------------------------------------------------
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("student.txt");

    file << "===== Student Information =====" << endl;
    file << "Name       : Prince Sharma" << endl;
    file << "Course     : BCA (AI & ML)" << endl;
    file << "University : Galgotias University" << endl;

    file.close();

    cout << "Data written successfully to student.txt" << endl;

    return 0;
}