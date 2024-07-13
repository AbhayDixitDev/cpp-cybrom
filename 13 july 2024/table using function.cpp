//2-->Write a program that ask the user to input a positive integer. 
//It should then print the multiplication table of that number.
//
//parameter -->int
//return --->no return 

#include<iostream>
using namespace std;
void table(int num){
	for(int i=1;i<=10;i++){
		cout<<num*i<<endl;
	}
}
int main(){
	int num;
	cout<<"enter a number for its table:";
	cin>>num;
	table(num);
}
