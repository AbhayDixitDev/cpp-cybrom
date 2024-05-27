//write a program to check number is positive or negative
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;//given value 0
	int r=num>0;
	cout<<r<<endl;//0
	cout<<(num == 0)<<endl;//1
	cout<<(num!= 0)<<endl;//0
	cout<<(num>=0)<<endl;//1
	cout<<(num<=0)<<endl;//1

}
