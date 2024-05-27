#include<iostream>
using namespace std;
int main()
{
	double amount,rate,time;
	cout<<"Enter amount, rate, time"<<endl;
	cin>>amount>>rate>>time;
	if (amount>0 && rate>0 && time>0)
	{
		double intrest = (amount*rate*time)/100;
		cout<<"Simple Intrest is "<<intrest<<endl;
	}
	else{
		cout<<"Invalid Input"<<endl;
	}
}
