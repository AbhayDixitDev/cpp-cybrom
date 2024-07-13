//2>-->Write a program to find the factorial of any number entered by user
//parameter -->int
//return --->int (or long long in case of higher number) i,e result

#include<iostream>
using namespace std;
long long fact(int num){
	int sum=1;
	while(num>0){
		sum=sum*num;
		num--;
	}
	return sum;
}
int main(){
	int num;
	cout<<"enter a number:";
	cin>>num;
	cout<<fact(num);
}
