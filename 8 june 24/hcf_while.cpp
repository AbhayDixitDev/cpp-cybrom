//Write a program to calculate HCF of Two given number
#include<iostream>
using namespace std;
int main(){
	int n1,n2,small,i=2,result;
	cout<<"enter two number for hcf";
	cin>>n1>>n2;
	if(n1<n2){
		small=n1;
	}
	else
	small=n2;
	while(i<=small/2){
		if(n1%i==0 && n2%i==0){
			result=i;
			
		}
		i++;
	}
	cout<<result;
	
}
