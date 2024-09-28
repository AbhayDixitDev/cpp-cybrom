/*Abstract class:	
It is created merely for designing purpose,here with the help of 
this class we can't create any object.
	
Here a few function may be implemented but mostly of them is declared
only (Pure virtual functions).
	
if we have to implement all declared function in child class 
=============================================================================================================================
WAP to create a abstract class name RBI having pure virtual function intrest rate
and repo rate, create some child class name PNB , SBI*/

#include <iostream>
using namespace std;

class RBI{
	public:
		virtual void interest_rate()=0; //pure virtual function
		virtual void repo_rate()=0; //pure virtual function
		
		void info(){
			cout<<"RBI regulate all financial institution\n";
		}
};


class SBI:public RBI{
	public:
		void interest_rate(){
			cout<<"SBI Interest Rate, 7 %";
		}
		void repo_rate(){
			cout<<"SBI Interest rate, 6.5 %";
		}
};

int main(){
	RBI *obj=new SBI;
	obj->interest_rate();
	cout<<endl;
	obj->repo_rate();
	cout<<endl;
	obj->info();
}

