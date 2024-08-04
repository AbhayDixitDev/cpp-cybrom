//2)Write a C++ program to define a class named  Rectangle.
//private member:length and width
//public member functions:calculate_area(),calculate_perimeter()

#include <iostream>
using namespace std;

class Rectangle{
	private:
		double length;
		double width;
	public:
		void calculate_area(double len,double wid){
			length=len;
			width=wid;
			cout<<"Area of Rectangle is:"<<length*width<<endl;
		}
		void calculate_perimeter(double len,double wid){
			length=len;
			width=wid;
			cout<<"perimeter of Rectangle is:"<<2*(length+width);
		}
};

int main(){
	Rectangle obj1;
	obj1.calculate_area(8,10);
	obj1.calculate_perimeter(5,6);
	
}
