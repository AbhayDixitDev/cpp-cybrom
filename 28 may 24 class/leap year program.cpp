//Write a program to calculate whether year is leap year or not?

#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter year to check whether it is leap year or not :";
	cin>>year;
//	if(year%100==0){
//		cout<<"it is a century year, ";
//		if(year%400==0){
//			cout<<"it is a leap year";
//		}
//		else{
//			cout<<"it is not a leap year";
//		}
//	}
//	else{
//		cout<<"it is not a century year, ";
//		if(year%4==0){
//			cout<<"it is a leap year";
//		}
//		else{
//			cout<<"it is not a leap year";
//		}
//	}
if((year%4==0 && year%100!=0)|| year%400==0){
	cout<<"year is a leap year";
}
else{
	cout<<"year is not a leap year";
}

}


