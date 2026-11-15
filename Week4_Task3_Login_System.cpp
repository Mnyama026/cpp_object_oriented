#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variable declaration
    string correctUser = "admin";
    string correctPass = "1234";
    string user, pass;

    cout << "=== Login System ===" << endl;

    // do-while loop
    do {
        cout << "Enter Username: ";
        cin >> user;
        cout << "Enter Password: ";
        cin >> pass;

        // Check credentials
        if (user == correctUser && pass == correctPass) {
            cout << "\nAccess Granted!" << endl;
            break; // Exit loop
        } else {
            cout << "\nIncorrect credentials, try again." << endl;
        }
    } while (true); // Loop forever until break

    return 0;
}


