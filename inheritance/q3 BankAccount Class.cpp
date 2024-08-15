//Q.3>Implement a base class BankAccount with methods for deposit and withdraw. 
//Derive classes SavingsAccount and 
//CheckingAccount.


#include<iostream>
using namespace std;

class BankAccount {
	protected:
		double balance;
	public:
		BankAccount(double b = 0.0) { balance = b; }
		void deposit(double amount) { balance += amount; }
		virtual void withdraw(double amount) = 0;
		void display() { cout << "Balance: " << balance << endl; }
};

class SavingsAccount : public BankAccount {
	public:
		SavingsAccount(double b) : BankAccount(b) {}
		void withdraw(double amount) {
			if (amount <= balance) balance -= amount;
			else cout << "Insufficient balance." << endl;
		}
};

class CheckingAccount : public BankAccount {
	public:
		CheckingAccount(double b) : BankAccount(b) {}
		void withdraw(double amount) {
			if (amount <= balance) balance -= amount + 10.0;
			else cout << "Insufficient balance." << endl;
		}
};

int main() {
	SavingsAccount savings(1000.0);
	savings.display();
	savings.withdraw(200.0);
	savings.display();
	
	cout << endl;
	
	CheckingAccount checking(500.0);
	checking.display();
	checking.withdraw(300.0);
	checking.display();
	
	return 0;
}
