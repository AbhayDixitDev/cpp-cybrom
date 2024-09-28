//Write a program to multiply two numbers without using 
//multiplication operator (*)
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,mul=0;
	cout<<"enter two numbers:";
	cin>>n1>>n2;
	
	while(n2>0){
		mul=mul+n1;
		n2--;
	}
	cout<<"multiplication is:"<<mul;

}

