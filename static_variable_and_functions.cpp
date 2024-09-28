#include <iostream>
using namespace std;

class Cybrom{
	private:
		int enroll;
		string student_name;
		static string institute_name;
	
	public:
	    Cybrom(int enr,string name){
	    	enroll=enr;
	    	student_name=name;
		}
		
		void display(){
			cout<<"Student Name :"<<student_name<<endl;
			cout<<"Student Enroll Number :"<<enroll<<endl;
			cout<<"Institute Name :"<<institute_name<<endl;
		} 		
		static void changeInsName(string newname){
			institute_name=newname;
		}
	};	
	string Cybrom::institute_name="Cybrom";
	
	int main(){
		Cybrom obj1(01,"Abhay"),obj2(02,"Abhishek");
		obj1.display();
		obj2.display();
		Cybrom::changeInsName("Cybrom Technologies");
		obj1.display();
		obj2.display();		
	}
