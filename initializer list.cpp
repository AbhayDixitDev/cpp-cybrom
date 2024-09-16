//intializer list
//
//first to call parents parametirea constrcutor
//execution fast (intialiaized own data member)
//initialized constant data member of own class
//for initialized reference variable(data member of own class);


#include <iostream>
using namespace std;

class Parent{
	protected: 
	int data;
	public:
		
		Parent(int n){
			data=n;
		}
};

class Child:public Parent{
	string name;
	public:
	Child (string n,int d):Parent(d),name(n){
//		name=n;
	}
	void display(){
		cout<<"name is "<<name<<" data is "<<data<<endl;
	}
};

int main(){
		Child obj("Abhay",444);
	    obj.display();
//	base->f1();
}
