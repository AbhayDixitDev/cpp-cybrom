//WAP to reverse a number n , and hence determine whether it is a palindrome
//number or not.

#include<iostream>
using namespace std;
int main()
{
	int n,last,temp,sum=0;
	cout<<"enter a number to check palindrome:";
	cin>>n;
	temp=n;
	for(int i=1;n>0;i++){
		last=n%10;
		sum=sum*10+last;
		n=n/10;
	}
	if(sum==temp){
		cout<<"number is a palindrome number:";
		
	}
	else{
		cout<<"it is not a palindrome number";
	}

}


