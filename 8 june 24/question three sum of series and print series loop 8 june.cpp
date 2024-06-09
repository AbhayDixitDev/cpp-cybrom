//
//Q.3>Write a program in C++ to calculate the sum of the series 
//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n). 
//
//n=5
//(1*1) + (2*2) + (3*3) + (4*4) + (5*5)=55

#include<iostream>
using namespace std;
int main(){
	
	int n,result=1;
	cout<<"enter a number for series";
	cin>>n;
	int i=1;
	cout<<"("<<i<<"*"<<i<<")";
	i++;
	while(i<=n){
		cout<<" +  "<<"("<<i<<"*"<<i<<")";
		result=result+ i*i;
		i++;
	}
	cout<<endl<<"sum of series is:"<<result;
}
