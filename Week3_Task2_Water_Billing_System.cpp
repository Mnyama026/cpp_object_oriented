#include <iostream>
#include <string>
using namespace std;

// Function to get customer details
void getCustomerDetails(string &customerName, double &unitsConsumed, double &ratePerUnit) {
    cout << "=== Water Billing System ===" << endl;

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Units Consumed: ";
    cin >> unitsConsumed;

    cout << "Enter Rate Per Unit (Ksh): ";
    cin >> ratePerUnit;
}

// Function to calculate water bill
double calculateBill(double unitsConsumed, double ratePerUnit) {
    return unitsConsumed * ratePerUnit;
}

// Function to apply discount
double applyDiscount(double totalBill, double unitsConsumed) {
    if (unitsConsumed > 100) {
        return totalBill * 0.10;
    } else {
        return 0;
    }
}

// Function to display water bill
void displayBill(string customerName, double unitsConsumed, double totalBill, double discount, double finalAmount) {
    cout << "\n==========================================" << endl;
    cout << "             WATER BILL RECEIPT            " << endl;
    cout << "==========================================" << endl;
    cout << "Customer Name       : " << customerName << endl;
    cout << "Units Consumed      : " << unitsConsumed << endl;
    cout << "Total Bill          : Ksh " << totalBill << endl;
    cout << "Discount            : Ksh " << discount << endl;
    cout << "------------------------------------------" << endl;
    cout << "Final Amount Payable: Ksh " << finalAmount << endl;
    cout << "==========================================" << endl;
}

// Main function
int main() {
    // Variable declaration
    string customerName;
    double unitsConsumed;
    double ratePerUnit;
    double totalBill;
    double discount;
    double finalAmount;

    // Get customer details
    getCustomerDetails(customerName, unitsConsumed, ratePerUnit);

    // Calculate total water bill
    totalBill = calculateBill(unitsConsumed, ratePerUnit);

    // Calculate discount
    discount = applyDiscount(totalBill, unitsConsumed);

    // Calculate final amount payable
    finalAmount = totalBill - discount;

    // Display customer water bill
    displayBill(customerName, unitsConsumed, totalBill, discount, finalAmount);

    return 0;
}