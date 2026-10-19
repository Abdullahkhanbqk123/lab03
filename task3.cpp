#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, department;
    int age;
    float gpa;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter GPA: ";
    cin >> gpa;
    cout << "Enter department: ";   // Task 3: new variable
    cin >> department;

    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;

    return 0;
}
