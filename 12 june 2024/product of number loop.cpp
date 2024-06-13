//Write a  program to calculate product of digits of a number?
//
//345=60
//23=6


#include<iostream>
using namespace std;
int main()
{
	int n,result=1,last;
	cout<<"enter a number to reverse:";
	cin>>n;
	while(n>0){
		last=n%10;
		result=result*last;
		n=n/10;
		
	}
	cout<<"product of number is:"<<result;

}
