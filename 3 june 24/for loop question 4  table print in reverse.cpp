//Write a program to print reverse tables
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number to print its table : ";
	cin>>n;
	for(int i=10;i>=1;i--){
		cout<<n<< "*"<< i<< " is equals to :"<< n*i<<endl;
	}

}
