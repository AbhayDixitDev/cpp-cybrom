//Write a C++ program that demonstrates polymorphism using function overriding. The program should have a base class called Shape with a virtual 
//function draw(). The program should also have two derived classes called Circle and Rectangle that override the draw() function to provide their own implementation.
//
//Define the Shape class with a virtual function draw().
//Define the Circle class that inherits from Shape and overrides the draw() function to display a message "Drawing a circle."
//Define the Rectangle class that inherits from Shape and overrides the draw() function to display a message "Drawing a rectangle."
//Create objects of Circle and Rectangle and demonstrate polymorphism using function overriding.

#include <iostream>
using namespace std;

class Shape{
	public:
		virtual void draw()=0;
};
class Circle:public Shape{
	public:
		
		void draw(){
			cout<<"Drawing a circle."<<endl;
		}
};

class Rectangle:public Shape{
	public:
		
		void draw(){
			cout<<"Drawing a Rectangle."<<endl;
		}
};

int main(){
	Circle obj1;
	obj1.draw();
	Rectangle obj2;
	obj2.draw();
}
