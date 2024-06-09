//Write a program in C++ to check whether a number is palindrome or not.
#include<iostream>
using namespace std;
int main(){
	int n,rem;
	cout<<"enter a number to check palindrome:";
	cin>>n;
	int temp=n;
	int sum=0;
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==temp){
		cout<<temp<<" is palindrome number ";
		
	}
	else{
		cout<<temp<<" is not a palindrome number";
	}
	
}
