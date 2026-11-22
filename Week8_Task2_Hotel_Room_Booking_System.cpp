#include <iostream>
#include <string>
using namespace std;

// RoomBooking class
class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    // Constructor to initialize booking details
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        daysBooked = days;
        cout << "Room booking confirmed!" << endl;
    }

    // Display booking details
    void displayBooking() {
        cout << "\n==========================================" << endl;
        cout << "             HOTEL BOOKING DETAILS         " << endl;
        cout << "==========================================" << endl;
        cout << "Guest Name     : " << guestName << endl;
        cout << "Room Number    : " << roomNumber << endl;
        cout << "Days Booked    : " << daysBooked << endl;
        cout << "==========================================" << endl;
    }

     // Destructor to release room
    ~RoomBooking() {
        cout << "\nBooking ended, room released!" << endl;
    }
};

// Main function
int main() {
    RoomBooking booking1("Michael Wanyama", 205, 3);

    booking1.displayBooking();

    return 0;
}