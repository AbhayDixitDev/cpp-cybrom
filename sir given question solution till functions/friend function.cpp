//Bank class using friend function

#include<iostream>
using namespace std;

class Bank{
	private:
		int balance;
		string name;
	public:
		Bank(int bal,string nm){
			balance=bal;
			name=nm;
		}
				
		void display(){
			cout<<"Name:"<<name<<" Balance:"<<balance<<endl;
		}
		
		friend void deposit(Bank &obj,int amount);
		friend void withdrawl(Bank &obj,int amount);
};

void deposit(Bank &obj,int amount){
	obj.balance=obj.balance+amount;
}

void withdrawl(Bank &obj,int amount){
	obj.balance=obj.balance-amount;
}

int main(){
	Bank obj(40000,"Abhay");
	obj.display();
	deposit(obj,4000);
	obj.display();
	withdrawl(obj,2000);
	obj.display();
}
