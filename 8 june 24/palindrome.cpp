//palindrome
#include<iostream>
using namespace std;
int main()
{
	int num,temp,sum=0,last;
	cout<<"enter test number:";
	cin>>num;
	temp=num;
	while(num>0){
		last=num%10;
		sum=sum*10+last;
		num=num/10;
		
	}
	if(temp==sum)
	cout<<"palindrome";
	else
	cout<<"no it is not a palindrome number";

}

