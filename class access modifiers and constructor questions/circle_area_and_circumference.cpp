//1)Write a C++ program to define a class named Circle.
//private member: radius
//public member functions:calculate_area(),calculate_circumference()

#include <iostream>
using namespace std;

class Circle{
	private:
		double radius;
	public:
		void calculate_area(double r){
			radius=r;
			cout<<"Area of circle is:"<<3.14*radius*radius<<endl;
		}
		void calculate_circumference(double r){
			radius=r;
			cout<<"Circumference of circle is:"<<2*3.14*radius;
		}
};

int main(){
	Circle obj1;
	obj1.calculate_area(10);
	obj1.calculate_circumference(20);
	
}
