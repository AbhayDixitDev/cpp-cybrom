//2)WAP to find the sum of first and last digit of a number n.
//n=2312
//output: 4
//n=1765
//output: 6
#include<iostream>
using namespace std;
int main()
{
	int n,last,first;
	cout<<"enter a number";
	cin>>n;
	int temp=n;
	last=n%10;
	n=temp;
	while(n>10)
	{
		first=n/10;
		n=n/10;
	}
	cout<<first+last;  
}

