//4)Write a C++ program to define a class named  Person.
//same as above question ,but they have a extra constructor i,e a copy constructor
//create a object and copy all value of another object which get their value from constructor

#include <iostream>
#include <string>

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

Person(const Person& p) {
    name = p.name;
    age = p.age;
    country = p.country;
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

    Person person2 = person1;
    person2.getter();

    person2.change_age(31);
    person2.getter();
}
