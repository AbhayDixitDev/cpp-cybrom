#include <iostream>
using namespace std;

class Parent{
	public:
		
		virtual void f1(){
			cout<<"Parent"<<endl;
		}
};

class Child:public Parent{
	public:
		
		void f1(){
			cout<<"Child"<<endl;
		}
};

int main(){
	Parent *base=new Child;
	
	base->f1();
	base->Parent::f1();
}