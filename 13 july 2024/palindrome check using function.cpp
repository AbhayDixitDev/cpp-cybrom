//5->WAP to print whether a number is palindrome number or not
//parameter -->int
//return --->string (a message "yes" or "no")

#include<iostream>
using namespace std;
string palin(int num){
	int temp=num,last=0,rev=0;
	while(num>0){
		last=num%10;
		rev=rev*10+last;
		num=num/10;
	}
	if(rev==temp){
		return "Yes";
	}
	else
	{
		return "No";
	}
}
int main(){
	int num;
	cout<<"enter a number to check it is palindrome or not:";
	cin>>num;
	cout<<palin(num);
}
