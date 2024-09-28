//Q.2>Create a base class Shape with methods to calculate area and perimeter. 
//Derive classes Circle and Rectangle.

#include<iostream>
using namespace std;

class Shape {
	protected:
		double area;
		double perimeter;
		
	public:
		virtual void calculateArea() = 0;
		virtual void calculatePerimeter() = 0;
		
		void display() {
			cout << "Area: " << area << endl;
			cout << "Perimeter: " << perimeter << endl;
		}
};

class Circle : public Shape {
	private:
		double radius;
		
	public:
		Circle(double r) {
			radius = r;
		}
		
		void calculateArea() {
			area = 3.14 * radius * radius;
		}
		
		void calculatePerimeter() {
			perimeter = 2 * 3.14 * radius;
		}
};

class Rectangle : public Shape {
	private:
		double length;
		double width;
		
	public:
		Rectangle(double l, double w) {
			length = l;
			width = w;
		}
		
		void calculateArea() {
			area = length * width;
		}
		
		void calculatePerimeter() {
			perimeter = 2 * (length + width);
		}
};

int main() {
	Circle circle(5.0);
	circle.calculateArea();
	circle.calculatePerimeter();
	circle.display();
	
	cout << endl;
	
	Rectangle rectangle(4.0, 6.0);
	rectangle.calculateArea();
	rectangle.calculatePerimeter();
	rectangle.display();
}
