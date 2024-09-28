#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	if(n != 0)
	{
		if(n>0)
		{
			cout<<"number is positive"<<endl;
			
		}
		else{
			cout<<"number is negative"<<endl;
		}
		
	}
	else{
		cout<<"enter a valid number, given number is neither negative nor positive"<<endl;
	}
}
