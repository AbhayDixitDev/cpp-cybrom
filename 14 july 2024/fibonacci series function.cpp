//3>Write a program to print Fibonacci series of n terms where n is input by user :
//0 1 1 2 3 5 8 13 24 ..... 
//parameter -->no
//return --->no

#include<iostream>
using namespace std;

void fibo(){
	int n1=0,n2=1,sum,range;
	cout<<"Enter terms:";
	cin>>range;
	for(int i=1;i;i++){
		sum=n1+n2;
		n1=n2;
		n2=sum;
		if(sum<=range){			
		cout<<sum<<" ";
		}
		else
		{
			break;
		}
	}
	
}
int main(){
	fibo();
}
