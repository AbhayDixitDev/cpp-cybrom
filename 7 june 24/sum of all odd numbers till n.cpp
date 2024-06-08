//Write a program to find sum of all odd numbers between 1 to n
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a range number till you want to add numbers numbers:";
	cin>>n;
	int sum=0;
	
	int i=1;
	while(i<=n){
		if(i%2!=0)
		sum=sum+i;
		i++;
	}
	cout<<"sum of all odd numbers from 1 to "<<n<<" is :"<<sum;

}
