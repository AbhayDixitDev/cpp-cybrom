//Write a program to calculate lcm of Two given number
#include<iostream>
using namespace std;
int main(){
	int n1,n2,max,i,result;
	cout<<"enter two number for lcm:";
	cin>>n1>>n2;
	if(n1>n2){
		max=n1;
	}
	else
	max=n2;
	i=max;
	while(i>=max){
		if(i%n1==0 && i%n2==0){
			result=i;
			break;
			
		}
		i++;
	}
	cout<<result;
	
}
