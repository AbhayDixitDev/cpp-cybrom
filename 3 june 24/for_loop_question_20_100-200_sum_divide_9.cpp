//Write a program to find number and sum of all integer between 100 and 200 
//which are divisible by 9.

#include<iostream>
using namespace std;
int main()
{
	int n=0;
	for(int i=100;i<=200;i++){
	if(i%9==0){
		cout<<i<<endl;
		n=n+i;
	}	
	}
	cout<<"sum of all numbers between 100 and 200 which are divisible by 9 is:"<<n;

}

