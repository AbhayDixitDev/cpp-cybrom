//Example of inheritance:

#include<iostream>
using namespace std;

class Parent{
	private:
		void f1(){
			cout<<"this is a private function f1 of class parent\n";
		}
    protected:
		void f2(){
			cout<<"this is a protected function f2 of class parent\n";
		}
    public:
		void f3(){
			cout<<"this is a public function f3 of class parent\n";
		}
};

class Child : public Parent{
     public:
	 void f4(){
	 	f2();
	 }	
};

int main(){
	Child obj;
	obj.f3();
	obj.f4();
}
	
	
