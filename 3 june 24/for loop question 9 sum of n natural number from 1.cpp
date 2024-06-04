//Write a program to find sum of all natural numbers between 1 to n
#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"enter a number to find sum of all numbers till given number:";
	cin>>n;
	for(int i=1;i<=n;i++){
	 sum=sum+i;	
	}
	cout<<"total sum of all natural numbers is :"<< sum;
	
}
