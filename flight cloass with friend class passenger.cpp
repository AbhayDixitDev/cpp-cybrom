//Q.2>Create a Friend Class Passenger of above mention class,  object of Passenger represents a passenger booking a flight.
//Data Member: passenger name.
//Methods: bookFlight() take a reference of Class Flight and a particular passenger can book a flight.
//                  display()?? display all detail of passenger.

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
    
    friend class Passenger;
};


class Passenger {
private:
    string passenger_name;
    Flight* booked_flight;

public:
    // Constructor
    Passenger(string name) : passenger_name(name), booked_flight(nullptr) {}

    // Method to book a flight
    void bookFlight(Flight& flight) {
        booked_flight = &flight;
        cout << passenger_name << " has booked flight " << flight.flight_number << endl;
    }

    // Method to display passenger details
    void display() const {
        cout << "Passenger Name: " << passenger_name << endl;
        if (booked_flight != nullptr) {
            cout << "Booked Flight Details:" << endl;
            booked_flight->getFlightDetails();
        } else {
            cout << "No flight booked." << endl;
        }
    }
};

int main() {
	
    Flight f2(101, "New York", "Los Angeles", "10:00 AM", 200.0);
    f2.getFlightDetails();

    Passenger p1("John Doe");
    p1.bookFlight(f2);
    p1.display();

    f2.update_time("11:00 AM");
    f2.getFlightDetails(); 
    
    p1.display();

    return 0;
}