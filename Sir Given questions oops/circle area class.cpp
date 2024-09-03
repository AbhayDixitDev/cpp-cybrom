//2.Write a C++ program to find the area of circle using class circle which have following details:

//a. Accept radius from the user
//b. Calculate the area
//c. Display the result


#include <iostream>
using namespace std;

class Circle{
	private:
		double radius;
	
	public:
		
		Circle(double r){
			radius=r;
		}
		void AreaOfCircle(){
			cout<<"Area of Circle="<<3.14*radius*radius<<endl;
		}
};

int main(){
	Circle obj1(24);
	obj1.AreaOfCircle();
}
