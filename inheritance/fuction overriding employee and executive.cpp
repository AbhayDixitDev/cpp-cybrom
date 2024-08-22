#include<iostream>
using namespace std;

class Employee{
	public:
		void prepare_salary(){
			cout<<"Salary prepare employee\n";
		}
		void promotion(){
			cout<<"if employee year>4-->promotion\n";
		}
};

class Executive : public Employee{
	public:
		void prepare_salary(){
			cout<<"Salary prepare Executive\n";
		}
};

int main(){
	//using stack 
	Employee obj1;
	obj1.prepare_salary();
	obj1.promotion();
	cout<<endl;
	Executive obj2;
	obj2.prepare_salary();
	obj2.promotion();
	cout<<endl;
	
	//using heap and pointer
	Employee *emp1=new Employee;
	emp1->prepare_salary();
	emp1->promotion();
	cout<<endl;
	Executive *emp2=new Executive;
	emp2->prepare_salary();
	emp2->promotion();
}
