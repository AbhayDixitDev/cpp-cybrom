//5)Write a C++ program to define a class named Car.
//protected member: company, model, and year
//constructor: initialized values (parameterized)
//public member functions:getter(),setter()


#include <iostream>
#include <string>

using namespace std;

class Car {
protected:
    string company;
    string model;
    int year;

public:
    Car(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
    }

    void getter() {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    void setter(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
    }
};

int main() {
    Car car1("Toyota", "Corolla", 2020);
    car1.getter();
    cout<<endl;

    car1.setter("Honda", "Civic", 2022);
    car1.getter();

    return 0;
}
