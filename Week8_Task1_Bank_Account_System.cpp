#include <iostream>
#include <string>
using namespace std;

// BankAccount class
class BankAccount {
private:
    // Variable declaration
    string accountHolder;
    string accountNumber;
    double accountBalance;

public:
    // Constructor to initialize account details
    BankAccount(string holder, string number, double balance) {
        accountHolder = holder;
        accountNumber = number;
        accountBalance = balance;
        cout << "Account successfully created!" << endl;
    }

    // Display account details
    void displayAccount() {
        cout << "\n==========================================" << endl;
        cout << "             BANK ACCOUNT DETAILS          " << endl;
        cout << "==========================================" << endl;
        cout << "Account Holder     : " << accountHolder << endl;
        cout << "Account Number     : " << accountNumber << endl;
        cout << "Account Balance    : Ksh " << accountBalance << endl;
        cout << "==========================================" << endl;
    }

    // Destructor to close account
    ~BankAccount() {
        cout << "\nAccount closed successfully!" << endl;
    }
};

// Main function
int main() {
    BankAccount account1("Michael Wanyama", "ACC12345", 50000);

    account1.displayAccount();

    return 0;
}