#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variable declaration
    string empName;
    double basicSalary;
    double bonus;
    double totalSalary;

    // User input and calculation for 5 employees
    cout << "=== Employee Bonus System ===" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "\nEmployee " << i << endl;

        cout << "Enter Employee Name: ";
        cin >> ws;// Fix: clears newline
        getline(cin, empName);

        cout << "Enter Basic Salary (Ksh): ";
        cin >> basicSalary;

        // Calculate employee bonus
        bonus = 0.05 * basicSalary;

        // Calculate total salary
        totalSalary = basicSalary + bonus;

        // Display employee salary report
        cout << "\n==========================================" << endl;
        cout << "           EMPLOYEE SALARY REPORT          " << endl;
        cout << "==========================================" << endl;
        cout << "Employee Name       : " << empName << endl;
        cout << "Basic Salary        : Ksh " << basicSalary << endl;
        cout << "Bonus               : Ksh " << bonus << endl;
        cout << "Total Salary        : Ksh " << totalSalary << endl;
        cout << "==========================================" << endl;
    }

    return 0;
}