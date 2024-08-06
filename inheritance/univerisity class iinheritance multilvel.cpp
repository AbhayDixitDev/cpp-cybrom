//WAP to create a university class having data member:university_name, address, session, number_of_streams, number_of_college_affilated,
//and member functions: parameterized constructor(), setter(), getter()
//create a child class College having attribute data members: college_name, address, number_of_students, 
//create a child class Student having attribute data members: student_name,address, 

#include<iostream>
using namespace std;

class University{
    protected:
    string university_name;
    
    public:
    University(string u_n){
        university_name=u_n;
    } 
};

class College : public University{
	protected:
	string college_name;
	public:
		College(string u_n,string coll_name):University(u_n){
			college_name=coll_name;
		}
};

class Student : public College{
	protected:
		string student_name;
	public:
		Student(string u_n,string coll_name,string stud_name):College(u_n,coll_name){
			student_name=stud_name;
		}
		void display(){
			cout<<"University Name:"<<university_name<<endl;
			cout<<"College Name:"<<college_name<<endl;
			cout<<"Student Name:"<<student_name<<endl;
		}
};

int main(){
	Student obj1("RGPV","UIT-RGPV","Abhay Dixit");
	obj1.display();	
}
