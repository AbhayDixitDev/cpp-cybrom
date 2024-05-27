#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter Year for checking it is leap year or not"<<endl;
	cin>>year;
	if(year>=200)
	{
		if(year%4==0)
		{
			cout<<"Leap Year"<<endl;
		}
		else{
			cout<<"normal year"<<endl;
		}
	}
	else{
		cout<<"enter a valid year in input"<<endl;
	}
}


