// Write a program to enter the numbers till the user wants and at the end
//  it should display the count of positive, negative and zeros entered.

#include<iostream>
using namespace std;
int main()
{
	int n1,p,n,z;
	char choice='y';
	while(choice=='y'){
		cout<<"enter a number :";
		cin>>n1;
		if(n1>0){
			p++;
		}
		if(n1<0){
			n++;
		}
		if(n1==0){
			z++;
		}
		cout<<"enter y to continue entering number or enter any other character to exit:";
		cin>>choice;
	}
	
	cout<<"Positive numbers:"<<p;
	cout<<"Negative numbers:"<<n;
	cout<<"Zero numbers"<<z;

}


