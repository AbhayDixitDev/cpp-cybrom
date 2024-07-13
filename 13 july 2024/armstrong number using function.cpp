//4->WAP to print whether a number is armstrong number or not
//parameter -->int
//return --->string (a message "yes" or "no")

#include<iostream>
#include<cmath>
using namespace std;
string armstrong(int num){
	int last=0,temp=num,power,size=0,arm=0;
	while(num>0)
	{		
		num=num/10;	
		size++;
	}
//	cout<<size;
    num=temp;
    
    while(num>0){
    	
    	last=num%10;
    	power=pow(last,size);
    	arm=arm+power;
		num=num/10;
		
	}
	if(arm==temp){
		return "yes";
	}
	else{
		return "no";
	}
	}
int main(){
	int num;
	cout<<"enter a number to check it is armstrong number or not:";
	cin>>num;
	cout<<armstrong(num);
}
