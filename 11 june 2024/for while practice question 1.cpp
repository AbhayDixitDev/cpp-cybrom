//WAP to display result according to following condition:
//1)take an input(only one input) n from the user.
//
//2)if n is a multiple of 7 ,display all multiple of 7 between
//range 1 -100.
//eg: n = 14 or n= 35 or any other multiple of 7
//output: 7 14 21 28 35 42 49 56 63 70 77 84 91 98  
//
//3)else if, n is a multiple of 11 ,display all multiple of 11 between
//range 1 -100.
//eg: n = 33 or n= 121 or any other multiple of 11
//output: 11 22 33 44 55 66 77 88 99
//
//4)other then this
//display message "no match"


#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	int i;

	if(n%7==0){
			i=7;
			while(i<=100){
				cout<<i<<endl;
				i=i+7;		
			}
	}
	else if(n%11==0){
			i=11;
			while(i<=100){
				cout<<i<<endl;
				i=i+11;		
			}
	}
	else {
		cout<<"No match";
	}

}

