#include<iostream>
using namespace std;
int main()
{
	int p;
	float r;
	int t;
	double si;
	cout<<"enter Priciple Amount"<<endl;
	cin>>p;
	cout<<"enter rate of interest"<<endl;
	cin>>r;
	cout<<"enter duration or time"<<endl;
	cin>>t;
	si=p*r*t/100;
	cout<<"Simple Interest = "<<si<<endl;
	
}
