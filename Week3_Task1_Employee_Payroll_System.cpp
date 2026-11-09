#include <iostream>
#include <string>
using namespace std;

// Function to get employee details
void getEmployeeDetails(string &employeeName, double &basicSalary, double &overtimeHours, double &ratePerHour) {
    cout << "=== Employee Payroll System ===" << endl;

    cout << "Enter Employee Name: ";
    getline(cin, employeeName);

    cout << "Enter Basic Salary (Ksh): ";
    cin >> basicSalary;

    cout << "Enter Overtime Hours: ";
    cin >> overtimeHours;

    cout << "Enter Rate Per Hour (Ksh): ";
    cin >> ratePerHour;
}

// Function to calculate overtime pay
double calculateOvertimePay(double overtimeHours, double ratePerHour) {
    return overtimeHours * ratePerHour;
}

// Function to calculate net salary
double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

// Function to display payslip
void displayPayslip(string employeeName, double basicSalary, double overtimeHours, double ratePerHour, double overtimePay, double netSalary) {
    cout << "\n==========================================" << endl;
    cout << "              EMPLOYEE PAYSLIP             " << endl;
    cout << "==========================================" << endl;
    cout << "Employee Name       : " << employeeName << endl;
    cout << "Basic Salary        : Ksh " << basicSalary << endl;
    cout << "Overtime Hours      : " << overtimeHours << endl;
    cout << "Rate Per Hour       : Ksh " << ratePerHour << endl;
    cout << "Overtime Pay        : Ksh " << overtimePay << endl;
    cout << "------------------------------------------" << endl;
    cout << "Net Salary          : Ksh " << netSalary << endl;
    cout << "==========================================" << endl;
}

// Main function
int main() {
    // Variable declaration
    string employeeName;
    double basicSalary;
    double overtimeHours;
    double ratePerHour;
    double overtimePay;
    double netSalary;

    // Get employee details
    getEmployeeDetails(employeeName, basicSalary, overtimeHours, ratePerHour);

    // Calculate overtime pay
    overtimePay = calculateOvertimePay(overtimeHours, ratePerHour);

    // Calculate net salary
    netSalary = calculateNetSalary(basicSalary, overtimePay);

    // Display employee payslip
    displayPayslip(employeeName, basicSalary, overtimeHours, ratePerHour, overtimePay, netSalary);

    return 0;
}
