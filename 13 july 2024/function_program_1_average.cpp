//1>WAP to create a function namedaverage that is created to find out the average of 5 numbers 
//parameter -->5 number
//return --->string (a message success)

#include<iostream>
using namespace std;

string namedaverage(double num1,double num2,double num3,double num4,double num5){
	double average=(num1+num2+num3+num4+num5)/5;
	cout<<"Average:"<<average;
	return "success";	
}

int main(){
	double num1,num2,num3,num4,num5;
	cout<<"Enter five numbers to find their average:";
	cin>>num1>>num2>>num3>>num4>>num5;
	cout<<endl<<namedaverage(num1,num2,num3,num4,num5);
	
}
