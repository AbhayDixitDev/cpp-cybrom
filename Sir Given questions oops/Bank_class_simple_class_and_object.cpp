//1.Define a class to represent a bank account. Include the following members:
//
//Data members:
//1) Name of the depositor
//2) Account number
//3) Type of account
//4) Balance amount in the account.
//5) password 

//Member functions:
//1) To assign initial values (constructor)
//2) To deposit an amount (match password if want to perform operation)
//3) To withdraw an amount after checking the balance (match password if want to perform operation)
//4) To display name and balance.


#include <iostream>
using namespace std;

class Bank_Account{
	private:
		string nameOfDepositor,accountNumber,accountType,password;
		double balance;
	
	public:
		Bank_Account(string nm,string account,string type,string pass,double bal){
			nameOfDepositor=nm;
			accountNumber=account;
			accountType=type;
			balance=bal;
			password=pass;			
		}
		
		void deposit(string pass,double amount){
			if(password==pass){
				balance=balance+amount;
				cout<<amount<<" deposited to your account number"<<endl;
			}
			else{
				cout<<"Incorrect Password,Try Again!"<<endl;
			}
		}
		
		
		void withdraw(string pass,double amount){
			if(password==pass){
				balance=balance-amount;
				cout<<amount<<" deducted from your account number"<<endl;
			}
			else{
				cout<<"Incorrect Password,Try Again!"<<endl;
			}
		}
		
		void display(){
			cout<<"Customer Name:"<<nameOfDepositor<<" Current Balance:"<<balance<<endl;
		}
		
		
};

int main(){
	Bank_Account obj("Abhay","128125","Current","12345",40000);
	obj.display();
	obj.deposit("12344",4000);
	obj.display();
	
}

