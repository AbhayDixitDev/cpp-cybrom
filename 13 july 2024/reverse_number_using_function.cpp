//3-->Write a program that prompts the user to input an integer and then 
//outputs the number with the digits reversed.
//parameter -->int
//return --->int 

#include<iostream>
using namespace std;
int rev(int num){
	int last=0,rev=0;
	while(num>0){
		last=num%10;
		rev=rev*10+last;
		num=num/10;
	}
	return rev;
}
int main(){
	int num;
	cout<<"Enter a Num for its reverse:";
	cin>>num;
	cout<<rev(num);
}
