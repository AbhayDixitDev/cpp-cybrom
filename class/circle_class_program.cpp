//
//Write a cpp code for class named Circle 
//constructed by a radius and two methods 
//which will compute the area and the perimeter of a circle


#include<iostream>
using namespace std;
const double PI=3.14;
class Circle {
public:
	double radius;
    void calculateArea() {
        cout << "Area of the circle: "<< PI * radius * radius * 1.0;
    }

    void calculatePerimeter() {
        cout << "Perimeter of the circle: " << 2 * PI * radius;
    }
};

int main() {
    Circle myCircle;
	cout << "Enter Radius of Circle: " ;
	cin >> myCircle.radius; 

    myCircle.calculateArea();
    cout<<"\n";
    myCircle.calculatePerimeter();

}
