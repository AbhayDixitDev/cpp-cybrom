//Write a program to enter the numbers till the user wants and at the end the program
// should display the largest and smallest numbers entered
#include<iostream>
using namespace std;
int main(){
	int n;
		int n1,n2=0,n3=0;
		
	cout<<"enter a number limit till you want to enter  numbers :";
	cin>>n;
	cout<<"enter numbers";
	 cin>>n1;
	 n3=n1;
	for(int i=1;i<n;i++){
	 cout<<"enter numbers";
	 cin>>n1;
	 
	 if(n2<n1){
	 	n2=n1;
	 }
	 if(n3>n1){
	 	n3=n1;
	 }
    
	 
	 
	 
	}
	cout<<"gretest number :"<< n2<<", smallest number:"<<n3;
}
