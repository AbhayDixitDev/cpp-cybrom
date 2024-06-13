//Write a program to find the factorial of any number entered by user.
#include<iostream>
using namespace std;
int main()
{
	int n1,fact=1;
	cout<<"enter two numbers:";
	cin>>n1;
	
	while(n1>0){
		fact=fact*n1;
		n1--;
	}
	cout<<"factorial is:"<<fact;

}

