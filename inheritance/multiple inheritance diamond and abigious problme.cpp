//Multiple inheritance
//ambiguity problem and diamond problem
//Diamond/Ambiguity Problem: In multiple inheritance (hybrid) whenever we define 
//same data member and member function with same name then if child want to 
//take access of any one ofthem with similiar name then it may lead to conflict,
//this conflict is known as diamond problem. 

//To resolve this problem we use scope resolution operator :: obj.Parent1::f1();
//	(in hybrid we may also use virtual inheritance)

//If child has also some data member and member function with same name of parent
//class and with the help of child object, we call them, then according to the 
//principle of locality of reference, function of child is called not of any parent.
// this concept is known as method (function) overriding.

#include<iostream>
using namespace std;

class Parent1{
	public:
		int data;
		void f1(){
			cout<<"this is function f1 of class parent 1\n";
		}
};
class Parent2{
	public:
		int data;
		void f1(){
			cout<<"this is function f1 of class parent 1\n";
		}
};
class Child: public Parent1, public Parent2{
	
};

int main(){
	Child obj;
	obj.Parent1::f1();
}


