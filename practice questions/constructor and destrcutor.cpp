//Implement a C++ program that demonstrates the use of constructors and destructors in a class. The program should have a class 
//called MyClass with a private member variable x. The constructor should initialize x with a value, and the destructor should 
//display a message when an object of the class is destroyed.
//
//Define the MyClass class with a private member variable x.
//Define a constructor for MyClass that initializes x with a value.
//Define a destructor for MyClass that displays a message "Object destroyed."
//Create an object of MyClass and demonstrate the constructor and destructor.


#include <iostream>
using namespace std;

class MyClass{
	private:
		int x;
	public:
		MyClass(int i){
			x=i;
		}
		void display(){
			cout<<"value of X is "<<x<<endl;
		}
		~MyClass(){
			cout<<"Object Destroyed";
		}
};

int main(){
	MyClass obj(10);
	obj.display();
}