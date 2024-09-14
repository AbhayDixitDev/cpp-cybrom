//Implement a C++ program that demonstrates abstract classes and pure virtual functions. The program should have an abstract base class 
//called AbstractClass with a pure virtual function doSomething(). The program should also have a derived class called ConcreteClass that 
//provides an implementation for the doSomething() function.
//
//Define the AbstractClass class with a pure virtual function doSomething().
//Define the ConcreteClass class that inherits from AbstractClass and provides an implementation for the doSomething() function.
//Create an object of ConcreteClass and demonstrate the use of abstract classes and pure virtual functions.

#include <iostream>
using namespace std;



class AbstractClass{
	public:
		virtual void doSomething()=0;
};

class ConcreteClass:public AbstractClass{
	public:
		void doSomething(){
			cout<<"Pure abstract class:";
		}
};

int main(){
	//we can not create a object of abstract class 
	ConcreteClass obj;
	obj.doSomething();
}