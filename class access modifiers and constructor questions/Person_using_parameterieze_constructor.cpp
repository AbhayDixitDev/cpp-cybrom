//3)Write a C++ program to define a class named  Person.
//private member: name, age and country
//constructor: initialized values (parameterized)
//public member functions:getter()--->to get all values
//change_age()--->to change the age of given objects.

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;
public:
    Person(string n, int a, string c){
    	name=n;
    	age=a;
    	country=c;
	}
    void getter() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
    void change_age(int new_age) {
        age = new_age;
    }
};

int main() {
    Person person1("John Doe", 30, "USA");
    person1.getter();
    person1.change_age(31);
    person1.getter();
}
