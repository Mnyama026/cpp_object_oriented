#include <iostream>
#include <string>
using namespace std;

// Vehicle base class
class Vehicle {
protected:
    string brand;
    int yearOfManufacture;

public:
    void inputVehicle() {
        cout << "Enter Vehicle Brand: ";
        getline(cin, brand);

        cout << "Enter Year of Manufacture: ";
        cin >> yearOfManufacture;
    }

    void displayVehicle() {
        cout << "Vehicle Brand       : " << brand << endl;
        cout << "Year of Manufacture : " << yearOfManufacture << endl;
    }
};

// Car derived class
class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity;

public:
    void inputCar() {
        inputVehicle();

        cout << "Enter Number of Doors: ";
        cin >> numberOfDoors;

        cout << "Enter Engine Capacity (CC): ";
        cin >> engineCapacity;
    }

    void displayCar() {
        cout << "\n==========================================" << endl;
        cout << "              CAR DETAILS                  " << endl;
        cout << "==========================================" << endl;
        displayVehicle();
        cout << "Number of Doors      : " << numberOfDoors << endl;
        cout << "Engine Capacity (CC) : " << engineCapacity << endl;
        cout << "==========================================" << endl;
    }
};

// Main function
int main() {
    Car car1;

    cout << "=== Vehicle Management System ===" << endl;
    car1.inputCar();
    car1.displayCar();

    return 0;
}
