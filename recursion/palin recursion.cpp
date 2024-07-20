//Write a recursive function to check if a string is a palindrome. 
//A palindrome reads the same forwards and backwards.

#include<iostream>
using namespace std;
int palin(int num){
	int sum;
	if(num==0){
		return 0;
	}
	else{
//	    sum=sum*10+num%10;
		return sum+1+palin(num/10);
	    
	}
}
int main(){
	int num=121;
	int temp=num;
	cout<<palin(num)<<endl;
//	if(num==palin(num)){
//		cout<<"yes:";
//	}
}
