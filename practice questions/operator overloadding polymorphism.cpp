//Write a C++ program that demonstrates operator overloading for the + operator. The program should have a class called ComplexNumber 
//with private member variables real and imaginary. The + operator should be overloaded to add two ComplexNumber objects together.
//
//Define the ComplexNumber class with private member variables real and imaginary.
//Overload the + operator to add two ComplexNumber objects together.
//Create two ComplexNumber objects and demonstrate the use of operator overloading.

#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    // Constructor to initialize real and imaginary parts
    ComplexNumber(double r = 0, double i = 0){
    	real=r;
    	imaginary=i;
	}

    // Overload the + operator to add two ComplexNumber objects
    ComplexNumber operator+(const ComplexNumber& other) {
        double newReal = real + other.real;
        double newImaginary = imaginary + other.imaginary;
        return ComplexNumber(newReal, newImaginary);
    }

    // Method to display the complex number
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    // Create two ComplexNumber objects
    ComplexNumber c1(3, 4);
    ComplexNumber c2(1, 2);

    // Add the two complex numbers using the overloaded + operator
    ComplexNumber c3 = c1 + c2;

    // Display the results
    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();
    cout << "Sum: ";
    c3.display();

    return 0;
}