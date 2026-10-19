#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char grade;
    double fee;

    cout << "Enter grade: ";
    cin >> grade;
    cout << "Enter fee: ";
    cin >> fee;

    cout << "\nStored Values" << endl;
    cout << "-------------" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Fee: " << fixed << setprecision(2) << fee << endl;

    return 0;
}
