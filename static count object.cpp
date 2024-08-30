//Bank class using friend function
//Static functions define outside class 


#include<iostream>
using namespace std;

class Bank{
	private:
		int balance;
		string name;
		static int count;
	public:
		Bank(int bal,string nm);				
		void display();		
		static void countshow();
		friend void deposit(Bank &obj,int amount);
		friend void withdrawl(Bank &obj,int amount);
};
int Bank::count=0;

Bank::Bank(int bal,string nm){
			balance=bal;
			name=nm;
			count++;
		}
		
void Bank::display(){
			cout<<"Name:"<<name<<" Balance:"<<balance<<endl;
		}
		
void Bank::countshow(){
			cout<<"count:"<<count;
		}		
		
void deposit(Bank &obj,int amount){
	obj.balance=obj.balance+amount;
}

void withdrawl(Bank &obj,int amount){
	obj.balance=obj.balance-amount;
}

int main(){
	Bank obj(40000,"Abhay"),obj1(40000,"Abhay");
	deposit(obj,4000);
	obj.display();
	withdrawl(obj,2000);
	obj.display();
	Bank::countshow();
}
