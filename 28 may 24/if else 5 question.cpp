//Write a program to read the value of an integer m and display the message "ok" when m is larger than 0,
//display the message "bye" when m is smaller then 0.
#include<iostream>
using namespace std;
int main()
{
	int m;
	cout<<"enter a number";
	cin>>m;
	if(m>0)
	{
		cout<<"ok";
	}
	else if(m<0){
		cout<<"bye";
	}

}

