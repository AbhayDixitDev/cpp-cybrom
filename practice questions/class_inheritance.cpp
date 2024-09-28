//Create a C++ program that demonstrates single inheritance. The program should have a base class called Vehicle with a method displayInfo() that 
//displays a message "This is a vehicle." The program should also have a derived class called Car that inherits from Vehicle. The Car class should 
//override the displayInfo() method to display a message "This is a car."
//
//Define the Vehicle class with a method displayInfo() that displays a message "This is a vehicle."
//Define the Car class that inherits from Vehicle.
//Override the displayInfo() method in the Car class to display a message "This is a car."
//Create an object of the Car class and call the displayInfo() method to demonstrate single inheritance.

#include <iostream>
using namespace std;

class Vehicle{
	public:
	void displayInfo(){
		cout<<"This is a vehicle."<<endl;
		
	}
	
};

class Car: public Vehicle{
	
};

int main(){
	Car obj;
	obj.displayInfo();
}