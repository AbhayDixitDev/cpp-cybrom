//write a program to sum of its Digits
#include<iostream>
using namespace std;
int main()
{
	int n;
	int r,d,final=0;
	cout<<"enter a number to reverse digits :";
	cin>>n;
	for(int i=1;n>=1;i++){
	
		r=n%10;
		final=final+ r;
			n=n/10;
	}
	cout<<final;

}

