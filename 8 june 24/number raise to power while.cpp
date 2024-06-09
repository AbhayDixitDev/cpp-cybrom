//Write a program to find the value of one number raised to the 
//power of another.
#include<iostream>
using namespace std;
int main()
{
	int n,power,result=1;
	cout<<"enter number and its power to calculate";
	cin>>n>>power;
	while(power>0){
		result=result*n;
		power--;
	}
	cout<<result;

}

