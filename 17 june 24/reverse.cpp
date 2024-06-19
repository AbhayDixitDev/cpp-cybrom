//Q.5 Write a program to display the number in reverse order?
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,last;
	cout<<"enter a number number:";
	cin>>n;
	for(int i=1;n>0;i++){
		last=n%10;
		n=n/10;
		sum=sum*10+last;
	}
	cout<<"reverse number is :"<<sum;

}

