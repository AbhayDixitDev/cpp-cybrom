#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter Your Marks"<<endl;
	cin>>marks;
	
	if(marks>=0 && marks<=100)
	{
		if(marks>=60 && marks<=100)
		{
			cout<<"Grade A"<<endl;
		}
		else if(marks>=45 && marks<60)
		{
			cout<<"Grade B"<<endl;
		}
		else if(marks>=30 && marks<45)
		{
			cout<<"Grade C"<<endl;
		}
		else
		{
			cout<<"Fail"<<endl;
		}
	}
	else
	{
		cout<<"Invalid Marks As Input"<<endl;
	}
}
