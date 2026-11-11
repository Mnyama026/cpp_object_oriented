#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    double accountBalance = 10000; // Ksh 10,000 initial balance
    double withdrawalAmount;

    // User input
    cout << "=== Savings Withdrawal System ===" << endl;

    // Allow repeated withdrawals using while loop
    while (accountBalance > 0) {
        cout << "\nEnter Withdrawal Amount (0 to exit): Ksh ";
        cin >> withdrawalAmount;

        if (withdrawalAmount == 0) {
            cout << "Transaction ended. Final balance: Ksh " << accountBalance << endl;
            break;
        }
        
        if (withdrawalAmount > accountBalance) {
            cout << "Insufficient Balance! Withdrawal cannot be completed." << endl;
        } else {
            accountBalance = accountBalance - withdrawalAmount;

            cout << "Withdrawal Successful. Remaining Balance: Ksh " << accountBalance << endl;
        }

        if (accountBalance == 0) {
            cout << "Your account balance is zero." << endl;
            break;
        }
    }

    // Display final account balance
    cout << "\n==========================================" << endl;
    cout << "             WITHDRAWAL SUMMARY            " << endl;
    cout << "==========================================" << endl;
    cout << "Final Account Balance: Ksh " << accountBalance << endl;
    cout << "==========================================" << endl;

    return 0;
}
