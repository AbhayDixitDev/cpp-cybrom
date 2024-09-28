//write a prpgram to create a class named employee having data members 
//e_id, e_name, e_dob, e_dept, e_salary and having method 
//parameterized constructor, display_data, create_salary, filter_records

#include<iostream>
using namespace std;

class Employee{
	public:
		int eid;
		string ename, dob, department;
		double salary;
		
	Employee(int id, string name,string date, string dep,double sal){
	 eid=id;
	 ename=name;
	 dob=date;
	 department=dep;
	 salary=sal;	
	}
	
	void display(){
		cout<<"Employee Id:"<<eid<<"Employee Name:"<<ename<<endl;
		cout<<"Date:"<<dob<<"Department:"<<department<<endl;
		cout<<"salary:"<<salary<<endl;
	}
};

int main(){
	Employee *obj1 = new Employee(0001,"Abhay","25/06/2002","IT_department",35000);
	obj1->display();  //we do not use . operator for accessing class function when we use pointer
	Employee *obj2 = new Employee(0002,"Abhishek","01/07/2002","IT_department",35000);
	obj2->display(); 
	Employee *obj3 = new Employee(0003,"Gagan","25/06/2003","IT_department",35000);
	obj3->display(); 
	Employee *obj4 = new Employee(0004,"Arpan","25/06/1999","IT_department",35000);
	obj4->display(); 
	Employee *obj5 = new Employee(0005,"Abhay","25/06/2002","IT_department",35000);
	obj5->display(); 
	
}
