//Write a program to enter the numbers till the user wants and at the end 
//it should display the count of positive, negative and zeros entered

#include<iostream>
using namespace std;
int main(){
	int n;
		int n1,n2=0,p=0,ne=0,z=0;
	cout<<"enter a number limit till you want to enter  numbers :";
	cin>>n;
	for(int i=1;i<=n;i++){
	 cout<<"enter numbers";
	 cin>>n1;
	 if(n1>0){
	 	p++;
	 }
	 else if(n1<0){
	 	ne++;
	 }
	 else{
	 	z++;
	 }
	}
	cout<<"positive numbers :"<< p<<", negative:"<<ne<<", zeros:"<<z;
}
