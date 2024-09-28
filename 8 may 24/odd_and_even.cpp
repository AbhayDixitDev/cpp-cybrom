#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	if(n!=0)
	{
	if(n%2==0)
	{
		cout<<"number is even"<<endl;
	}
	else
	{
		cout<<"number is odd"<<endl;
	}
	}
	else
	{
	cout<<"given number is 0"<<endl;
	}
}
