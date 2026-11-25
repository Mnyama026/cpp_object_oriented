#include <iostream>
#include <string>
using namespace std;

// Person base class
class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
    }
};

// Student derived class
class Student : public Person {
private:
    string admissionNumber;
    string studentClass;

public:
    void inputStudent() {
        inputPerson();

        cin.ignore();

        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);

        cout << "Enter Class: ";
        getline(cin, studentClass);
    }

    void displayStudent() {
        cout << "\n==========================================" << endl;
        cout << "            STUDENT DETAILS                " << endl;
        cout << "==========================================" << endl;
        displayPerson();
        cout << "Admission Number   : " << admissionNumber << endl;
        cout << "Class              : " << studentClass << endl;
        cout << "==========================================" << endl;
    }
};

// Main function
int main() {
    Student student1;

    cout << "=== School Management System ===" << endl;
    student1.inputStudent();
    student1.displayStudent();

    return 0;
}
