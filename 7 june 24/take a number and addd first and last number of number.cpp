#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,n1,count=-1,sum=0,ofpow=10,power;
	cout<<"enter a number:";
	cin>>n;
	n1=n;
	while(n1>0)
	{
		count++;
		n1=n1/10;
		
	}
	power=pow(ofpow,count);
	
	sum=sum+(n/power)+(n%10);
	cout<<"Sum of first and last digit of number:"<<sum;

	}
