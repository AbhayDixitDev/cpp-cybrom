//Write a program to find the value of one number raised to the power of another.
#include<iostream>
using namespace std;
int main()
{
	int n, power,result=1;
	cout<<"enter value and its power :";
	cin>>n>>power;
	for(int i=1;i<=power;i++){
		result=result*n;
	}
	cout<<n <<" raise to power "<< power<<" is :"<<result;

}

