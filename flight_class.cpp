//Q.1>Create a Class Flight with details mention below and make appropriate constructor:
//Data Member: flight_number, departure_city, destination_city, departure_time, price.
//Methods: getFlightDetails(),update_time().

#include <iostream>
using namespace std;

class Flight {
private:
    int flight_number;
    string departure_city;
    string destination_city;
    string departure_time;
    double price;

public:
    Flight(int flight_num = 0, string dep_city = "", string dest_city = "", string dep_time = "", double pr = 0.0)
        : flight_number(flight_num), departure_city(dep_city), destination_city(dest_city), departure_time(dep_time), price(pr) {}

    void getFlightDetails() const {
        cout << "Flight Number: " << flight_number << endl;
        cout << "Departure City: " << departure_city << endl;
        cout << "Destination City: " << destination_city << endl;
        cout << "Departure Time: " << departure_time << endl;
        cout << "Price: " << price << endl;
    }

    void update_time(string new_time) {
        departure_time = new_time;
    }
};

int main() {
    Flight f1;
    f1.getFlightDetails();

    Flight f2(101, "New York", "Los Angeles", "10:00 AM", 200.0);
    f2.getFlightDetails();

    // Update departure time
    f2.update_time("11:00 AM");
    f2.getFlightDetails();

    return 0;
}