//Destuctor:
//	
//	1)it is a special member function which can deallocate the resouces allocate by objects
//	
//	Resouces: memory, file handlers
//	
//	2)it can't be overlaoded.
//	
//	3)Destructor name same as  class name preceeded by ~ (tilde)
//	
//	4)if we can't mention in our code , then compiler create it for u.
//	
//	5) Destructor can be virtual(Same logic as virtual function)/ Constructor can not be virtual
//	
//	6)Order:
//	
//	


#include <iostream>
using namespace std;

class Parent{
	public:
		Parent(){
			cout<<"Parent Constructor\n";
		}
    virtual	~Parent(){
			cout<<"Parent Destructor\n";
		}
};


class Child:public Parent{
	public:
		Child(){
			cout<<"Child Constructor\n";
		}
	   ~Child(){
			cout<<"Child Destructor\n";
		}
};

class GrandChild:public Child{

	public:
		GrandChild(){
			cout<<"GrandChild Constructor\n";
		}
    ~GrandChild(){
			cout<<"GrandChild Destructor\n";
		}
};


int main(){
	Parent *basepointer=new GrandChild;
	delete basepointer;
}
