//Write a recursive function to count the number of digits in a positive integer.
#include<iostream>
using namespace std;

int count(int num){
	if(num==0){
		return 0;
	}
	else{
		return 1+count(num/10);
	}
}
int main(){
	int num;
	cout<<"enter a number:";
	cin>>num;
	cout<<count(num);
}
