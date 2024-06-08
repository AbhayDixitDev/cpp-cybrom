//Write a program to find sum of all natural numbers between 1 to n
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a range number till you want to add numbers:";
	cin>>n;
	int sum=0;
	
	int i=1;
	while(i<=n){
		sum=sum+i;
		i++;
	}
	cout<<"sum of all numbers from 1 to "<<n<<" is :"<<sum;

}
