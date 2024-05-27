#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age"<<endl;
	cin>>age;
	if(age>0 && age<=100)
	{
		cout<<"valid age group"<<endl;
		
	}
	else
	{
			cout<<"Invalid age group"<<endl;
	}
}
