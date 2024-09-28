//Friend Function and Friend Class
//It can take access of private or protected member of any class in which we declare it as a friend .

//keyword : friend

//friend function acts as a member function of a class
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
	friend class PhonePe;
};

class PhonePe{
	public:
		void deposit(Bank &obj,int amount){
			obj.balance=obj.balance+amount;
		}
		void withdrawl(Bank &obj,int amount){
			obj.balance=obj.balance-amount;
		}
};

int main(){
	Bank obj(40000,"Abhay");
	obj.display();
	PhonePe obj1;
	obj1.deposit(obj,4000);
	obj.display();
}
