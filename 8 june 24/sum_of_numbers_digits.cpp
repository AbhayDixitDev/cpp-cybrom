// write a program to sum of its Digits
#include<iostream>
using namespace std;
int main()
{
	int n,temp,result=0;
	cout<<"enter a number sum its digit:";
	cin>>n;
	while(n>0){
	 	temp=n%10;
	 	result=result+temp;
	 	n=n/10;
	}
	cout<<"sum of all digits of number is:"<<result;

}
