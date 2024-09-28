#include <iostream>
using namespace std;

class Cybrom{
	private:
		string course,studentname;
	
	public:
		
		Cybrom(string course,string stdNm){
			course=course;
			studentname=stdNm;
		}
		
		void display(){
			cout<<"Course Name:"<<course<<" Student Name:"<<studentname;
		}
		
		friend void student(Cybrom &obj,string studentname);
};

void student(Cybrom &obj,string nm){
	obj.studentname=nm;	
}

int main(){
	Cybrom obj("MERN","Abhay");
	student(obj,"Shivam");
	obj.display();
}
