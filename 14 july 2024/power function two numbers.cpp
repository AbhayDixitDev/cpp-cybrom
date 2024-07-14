//2>Two numbers are entered through the keyboard. Write a program to find
//the value of one number raised to the power of another. 
//parameter -->no
//return --->no

#include<iostream>
#include<cmath>
using namespace std;
void power(){
	int num,power;
	cout<<"Enter a numner and its power:";
	cin>>num>>power;
	cout<<pow(num,power);
}
int main(){
	power();
}
