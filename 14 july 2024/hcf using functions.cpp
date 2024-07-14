//3-->Write a program to calculate HCF of Two given number
//
//parameter -->no
//return --->return int

#include<iostream>
using namespace std;

int hcf(){
	int n1,n2,min;
	cout<<"enter two numbers:";
	cin>>n1>>n2;
	if(n1<n2){
		min=n1;
	}
	else{
		min=n2;
	}
	
	
	for(int i=min;i>0;i--){
		if(n1%i==0 && n2%i==0){
			return i;
			break;
		}
	}
	
}
int main(){
	cout<<hcf();
}

