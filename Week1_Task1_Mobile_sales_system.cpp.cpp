#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variable declaration
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone;
    double totalAmount;

    // User input
    cout << "=== Ruiru Mobile Phone Shop Sales System ===" << endl;

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Phone Model Purchased: ";
    getline(cin, phoneModel);

    cout << "Enter Quantity Bought: ";
    cin >> quantity;

    cout << "Enter Price Per Phone (Ksh): ";
    cin >> pricePerPhone;

    // Calculate total sales amount
    totalAmount = quantity * pricePerPhone;

    // Display well-formatted receipt
    cout << "\n==========================================" << endl;
    cout << "      RUIRU MOBILE PHONE SHOP RECEIPT      " << endl;
    cout << "==========================================" << endl;
    cout << "Customer Name      : " << customerName << endl;
    cout << "Phone Model        : " << phoneModel << endl;
    cout << "Quantity Bought    : " << quantity << endl;
    cout << "Price Per Phone    : Ksh " << pricePerPhone << endl;
    cout << "------------------------------------------" << endl;
    cout << "Total Sales Amount : Ksh " << totalAmount << endl;
    cout << "==========================================" << endl;
    cout << "   Thank you for shopping with us!        " << endl;
    cout << "==========================================" << endl;

    return 0;
}
