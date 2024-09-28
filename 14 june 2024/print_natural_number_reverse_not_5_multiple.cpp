//Q.2) Write a C++ program to print all natural numbers in reverse (from n to 1).
//but with one constraint i,e if number is multiple of 5 then ignore it.
//example:
//n=12
//output: 12 11 9 8 7 6 4 3 2 1


#include<iostream>
using namespace std;
int main()
{ int n;
	cout<<"enter a number:";
cin>>n;
	
	for(int i=n;i>=1;i--){
		if(i%5!=0){
			cout<<i<<endl;
		}
	}

}


