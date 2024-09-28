//3.Write a C++ program to define a class employee having members Emp-id, Emp-name, basic salary 
//and functions accept() , display() and calculate_salary().
//Calculate DA=10 % of basic salary, HRA=1500. 
//net_salary = basic_salary + da + hra
//Display the output.

#include <iostream>
using namespace std;

class Employee{
	private:
		string emp_id,emp_name;
		double basic_salary;
		double net_salary=0;
		
	public:
		void accept(string emp_id, string emp_name, double basic_salary){
			this->emp_id=emp_id;
			this->emp_name=emp_name;
			this->basic_salary=basic_salary;
					
		}
		
		void display(){
			cout<<"Employee Id:"<<emp_id<<"\nEmployee Name:"<<emp_name<<"\nEmployee Salary:"<<basic_salary<<endl;
			if(net_salary>0){
				cout<<"Net Salary:"<<net_salary<<endl;
			}	
		}
		
		void calculate_salary(){
			double da=basic_salary/10;
			double hra=1500;
			net_salary=basic_salary+hra+da;
//			cout<<"Net Salary="<<net_salary;
		}
		
};

int main(){
	Employee obj1;
	obj1.accept("1234","Abhay Dixit",50000);
	obj1.display();
	obj1.calculate_salary();	
	obj1.display();
	
}
