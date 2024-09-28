//input number example 2345= 2+3+4+5=14

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,count=0,sum=0;
	cout<<"Enter a number ";
	cin>>n;
	int n1=n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}

	cout<<" length = "<<count<<endl;
		int power=pow(10,count-1);

while(n1!=0)
{
		int power=pow(10,count-1);
	sum=sum+n1/power;
	
	n1=n1%power;
	count--;
}
cout<<sum;
}
