//3-->Write a program to calculate HCF of Two given number
//
//parameter -->no
//return --->return int

#include<iostream>
using namespace std;

int lcm(){
	int n1,n2,max;
	cout<<"enter two numbers:";
	cin>>n1>>n2;
	if(n1>n2){
		max=n1;
	}
	else{
		max=n2;
	}
	
	
	for(int i=max;i>max;i++){
		if(i%n1==0 && i%n2==0){
			return i;
	        break;
		}
	}
	
}
int main(){
	cout<<lcm();
}

