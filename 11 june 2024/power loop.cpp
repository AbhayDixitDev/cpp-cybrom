//Two numbers are entered through the keyboard. Write a program to find
//the value of one number raised to the power of another. 

#include<iostream>
using namespace std;
int main(){
	
	int n,p,result;
	cout<<"enter number and its power:";
	cin>>n>>p;
	result=n;
	while(p>0){
		result=result*n;
		p--;
	}
	cout<<result;
}

