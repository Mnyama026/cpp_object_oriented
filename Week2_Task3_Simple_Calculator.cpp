#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    double number1;
    double number2;
    double result;
    char operation;

    // User input
    cout << "Enter First Number: ";
    cin >> number1;

    cout << "Enter Operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter Second Number: ";
    cin >> number2;

    // Perform calculation using switch statement
    switch (operation) {
        case '+':
            result = number1 + number2;
            cout << "\nResult: " << result << endl;
            break;

        case '-':
            result = number1 - number2;
            cout << "\nResult: " << result << endl;
            break;

        case '*':
            result = number1 * number2;
            cout << "\nResult: " << result << endl;
            break;

        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                cout << "\nResult: " << result << endl;
            } else {
                cout << "\nError: Division by zero is not allowed!" << endl;
            }
            break;

        default:
            cout << "\nInvalid operator entered!" << endl;
    }

    return 0;
}