//Q.1) Define a function in C++ that calculates the factorial of a number

#include <iostream>
using namespace std;

int Fact(double n){
	double fact=1;
	for(double i=1;i<=n;i++){
		fact=fact*i;
	}
//	cout<<fact;
	return fact;
	
}

int main(){
	double number;
  cout<<"Enter a number for factorial:";
  cin>>number;
  cout<<Fact(number);
}
