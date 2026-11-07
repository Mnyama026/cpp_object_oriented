#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variable declaration
    string studentName;
    int age;
    double score;

    // User input
    cout << "=== Ruiru College Admission Application System ===" << endl;

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Exam Score: ";
    cin >> score;

    cout << "\n=== Admission Result ===" << endl;
    cout << "Name   : " << studentName << endl;
    cout << "Age    : " << age << endl;
    cout << "Score  : " << score << endl;
    cout << "------------------------" << endl;

    // Nested if
    if (age >= 18) {
        if (score >= 50) {
            cout << "Decision: Admitted" << endl;
        } else {
            cout << "Decision: Not Admitted: Low Score" << endl;
        }
    } else {
        cout << "Decision: Not Admitted: Underage" << endl;
    }
    
    cout << "========================";
    return 0;
}

