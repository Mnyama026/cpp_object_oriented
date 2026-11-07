#include <iostream>
#include <string>
using namespace std;

int main () {
    // Variable declaration
    string studentName;
    double theoryMarks;
    double practicalMarks;
    double averageScore;

    // User input
    cout << "=== Rocky Driving School Test System ===" << endl;

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Theory Test Marks: ";
    cin >> theoryMarks;

    cout << "Enter Practical Test Marks: ";
    cin >> practicalMarks;

    // Calculate average score
    averageScore = (theoryMarks + practicalMarks) / 2;

    // Display of test evaluation system
    cout << "\n=========================================" << endl;
    cout << "      ROCKY DRIVING SCHOOL RESULTS       " << endl;
    cout << "=========================================" << endl;
    cout << "Student Name     : " << studentName << endl;
    cout << "Theory Marks     : " << theoryMarks << endl;
    cout << "Practical Marks  : " << practicalMarks << endl;
    cout << "Average Score    : " << averageScore << endl;
    cout << "-----------------------------------------" << endl;

    if (averageScore >= 50) {
        cout << "Result     : PASSED" << endl;
    } else {
        cout << "Result     : FAILED" << endl;
    }

    cout << "=========================================" << endl;

    return 0;
}
