#include<iostream>
using namespace std;

class Person{
	protected:
		string name;
		string address;
		
	public:
		Person(string n, string a){
			this->name = n;
			this->address = a;
		}
		void display(){
			cout<<"Name: "<<name<<endl;
			cout<<"Address: "<<address<<endl;
		}
};

class Student:public Person{
	public:
		Student(string n, string a):Person(n, a){}
};

class Teacher:public Person{
	public:
		Teacher(string n, string a):Person(n, a){}
};

int main(){
	Person obj1("Abhay","Bhopal");
	obj1.display();
	
	Student obj2("Rahul", "Indore");
	obj2.display();
	
	Teacher obj3("Raj", "Mumbai");
	obj3.display();
	
}
