//write a program demostrate exception handling with the help of a program 
//
//take 2 input from a user again and again, until user type 'e' 
//throw an exception if
//1)the result of addition is going to be greater than 100.
//2) the user entered any character other then 'e' or 'y';



#include <iostream>
using namespace std;

int main(){
	int num1,num2;
	string choice="y";
	try{
	while(choice=="y"){
		cout<<"enter two numbers for addition:";
		cin>>num1>>num2;
	    if(num1+num2>100){
	    	throw num1+num2;
		}
		cout<<"Sum:"<<num1+num2<<endl;
		
		cout<<"for continue enter 'y' and for exit enter 'e':";
		cin>>choice;
		
		if(choice!="y" && choice!="e"){
			throw choice;
		}
	}
}
catch(int sum){
	cout<<"EXCEPTION:"<<sum<<" is greater then 100";
}
catch(string choice){
	cout<<"EXCEPTION:"<<choice<<" is not a valid choice";
}

//catch(...){
//	cout<<"EXCEPTION!";
//}
	
}
