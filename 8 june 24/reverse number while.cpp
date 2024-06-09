//write a program to reverse the given Digits
#include<iostream>
using namespace std;
int main()
{
	int n,temp,result=0;
	cout<<"enter a number to reverse:";
	cin>>n;
	while(n>0){
	 	temp=n%10;
	 	result=result*10+temp;
	 	n=n/10;
	}
	cout<<"reverse number is:"<<result;

}

