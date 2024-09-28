//Write a program to find number and sum of all integer between 100 and 200 
//which are divisible by 9.
#include<iostream>
using namespace std;
int main()
{
	int sum=0,div;
	int i=100;
	while(i<=200){
		if(i%9==0){
			sum=sum+i;
			cout<<i<<endl;
		}
		i++;
	}
	cout<<"sum of all numbers which can be divisible with 9 between 100 and 200 is :"<<sum;

}


