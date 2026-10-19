#include <iostream>
#include <string>
using namespace std;

// Single-line comment: program that stores student data
int main() {
    string name;   // variable to store the student's name
    int age;       // variable to store the student's age
    float gpa;     // variable to store the student's GPA

    /* Multi-line comment:
       cout is used to print output on the screen,
       cin is used to read input from the user.
       The >> operator extracts data from the keyboard. */
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    /* Concepts:
       1. Variable: a named memory location used to store data
          that can be modified during program execution.
       2. cin : takes input from the user (keyboard).
       3. cout: displays output on the screen. */

    return 0;
}
