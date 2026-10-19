#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, department;
    int age, birthYear;
    float gpa;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter GPA: ";
    cin >> gpa;
    cout << "Enter department: ";
    cin >> department;

    birthYear = 2026 - age;   // Task 4: calculate birth year

    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;
    cout << "Birth Year: " << birthYear << endl;

    return 0;
}
