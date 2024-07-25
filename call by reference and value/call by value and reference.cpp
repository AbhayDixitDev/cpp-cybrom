//call by value and call by reference
//----------------------------------------------------------------------------
//int number1=80;
//int &digit=number1;
//call by reference
//for object passing  (operator overlaoding)


#include<iostream>
using namespace std;

void increment_10(int &n){
	n=n+10;
	
}

int main(){
	int number=12;
	increment_10(number);
	cout<<number<<endl;
}
