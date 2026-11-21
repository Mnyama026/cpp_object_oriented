#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    double revenue[7];
    double total = 0;
    double average;
    int occupancy[5][10];
    int chain[3][5][10];
    int occupied = 0;
    int vacant = 0;

    // weekly revenue - 1D array
    cout << "HOTEL WEEKLY REVENUE TRACKER" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Enter Revenue for Day " << i + 1 << ": ";
        cin >> revenue[i];
        total = total + revenue[i];
    }

    average = total / 7;

    cout << "\nWEEKLY REVENUE REPORT" << endl;
    cout << "Total Weekly Revenue: Ksh " << total << endl;
    cout << "Average Daily Revenue: Ksh " << average << endl;

    // room occupancy one branch - 2D array
    cout << "\nROOM OCCUPANCY - ONE BRANCH" << endl;
    cout << "Enter 1 for Occupied, 0 for Vacant" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "\nFloor " << i + 1 << endl;
        for (int j = 0; j < 10; j++) {
            cout << "Room " << j + 1 << ": ";
            cin >> occupancy[i][j];
        }
    }

    cout << "\nROOM OCCUPANCY REPORT" << endl;
    for (int i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;
        for (int j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        cout << "Floor " << i + 1 << " - Occupied: " << occupied << ", Vacant: " << vacant << endl;
    }

    // multiple branches - 3D array
    srand(time(0)); // using rand() to fill rooms randomly

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 10; k++) {
                chain[i][j][k] = rand() % 2;
            }
        }
    }

    occupied = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 10; k++) {
                if (chain[i][j][k] == 1)
                    occupied++;
            }
        }
    }

    cout << "\nMULTIPLE BRANCHES OCCUPANCY" << endl;
    cout << "Total Branches: 3" << endl;
    cout << "Floors Per Branch: 5" << endl;
    cout << "Rooms Per Floor: 10" << endl;
    cout << "Total Occupied Rooms: " << occupied << endl;

    return 0;
}