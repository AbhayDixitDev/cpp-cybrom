//wap to demonstrate call by value and call by reference , by creating two function great_zero()
//paramet =3 int
//return void
//find greatest number and assign it zero
//
//print three numbers in main

#include<iostream>
using namespace std;


void great_zero(int &num1,int &num2, int &num3){
	if(num1>num2 && num1>num3){
		num1=0;
	}
	else if(num2>num1 && num2>num3){
		num2=0;
	}
	else if(num3>num1  && num3>num2){
		num3=0;
	}
}
void great_zero1(int num1,int num2, int num3){
	if(num1>num2 && num1>num3){
		num1=0;
	}
	else if(num2>num1 && num2>num3){
		num2=0;
	}
	else if(num3>num1  && num3>num2){
		num3=0;
	}
}
void great_zero2(int *num1,int *num2, int *num3){
	if(*num1>*num2 && *num1>*num3){
		*num1=0;
	}
	else if(*num2>*num1 && *num2>*num3){
		*num2=0;
	}
	else if(*num3>*num1  && *num3>*num2){
		*num3=0;
	}
}

int main(){
	int num1=20,num2=30,num3=10;
	great_zero1(num1,num2,num3);
	cout<<"value of three numbers after call by value function:"<<endl<<"num1:"<<num1<<" num2:"<<num2<<" num3:"<<num3<<endl;
	great_zero(num1,num2,num3);
	cout<<"value of three numbers after call by reference function:"<<endl<<"num1:"<<num1<<" num2:"<<num2<<" num3:"<<num3<<endl;
	great_zero1(num1,num2,num3);
	num1=20,num2=30,num3=10;
	great_zero2(&num1,&num2,&num3);
    cout<<"value of three numbers after call by pointer reference function:"<<endl<<"num1:"<<num1<<" num2:"<<num2<<" num3:"<<num3<<endl;
}
