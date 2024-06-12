//Write a program that prompts the user to input an integer and then 
//outputs the number with the digits reversed.

#include<iostream>
using namespace std;
int main()
{
	int n,result=0,last;
	cout<<"enter a number to reverse:";
	cin>>n;
	while(n>0){
		last=n%10;
		result=result*10+last;
		n=n/10;
		
	}
	cout<<"reverse number is:"<<result;

}


