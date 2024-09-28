//write a program to reverse the given Digits
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
		final=final*10+ r;
			n=n/10;
	}
	cout<<final;

}

