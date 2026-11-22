#include <iostream>
#include <string>
using namespace std;

// Student class
class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    // Input student details
    void inputStudent() {
        cout << "=== Student Fee Management System ===" << endl;

        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);

        cout << "Enter Fee Balance (Ksh): ";
        cin >> feeBalance;
    }

    // Make a payment
    void makePayment() {
        double payment;

        cout << "\nEnter Payment Amount (Ksh): ";
        cin >> payment;

        if (payment > 0 && payment <= feeBalance) {
            feeBalance = feeBalance - payment;
            cout << "\nPayment made successfully!" << endl;
        } else {
            cout << "\nInvalid payment amount!" << endl;
        }
    }

    // Display student status
    void displayStatus() {
        cout << "\n==========================================" << endl;
        cout << "          STUDENT FEE STATEMENT            " << endl;
        cout << "==========================================" << endl;
        cout << "Student Name       : " << studentName << endl;
        cout << "Admission Number   : " << admissionNumber << endl;
        cout << "Remaining Fee      : Ksh " << feeBalance << endl;
        cout << "==========================================" << endl;
    }
};

// Main function
int main() {
    Student student1;

    student1.inputStudent();
    student1.makePayment();
    student1.displayStatus();

    return 0;
}