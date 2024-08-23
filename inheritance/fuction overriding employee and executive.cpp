#include<iostream>
using namespace std;

class Employee{
	public:
	virtual	void prepare_salary(){
			cout<<"Salary prepare employee\n";
		}
		void promotion(){
			cout<<"if employee year>4-->promotion 1\n";
		}
};

class Executive : public Employee{
	public:
	void prepare_salary(){   // here virtual is used to 
			cout<<"Salary prepare Executive\n";
		}
};
class Boss : public Executive{
	public:
	void prepare_salary(){   // here virtual is used to 
			cout<<"Salary prepare Boss\n";
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
	Employee *emp2=new Boss;
	emp2->prepare_salary();
	emp2->promotion();
}
