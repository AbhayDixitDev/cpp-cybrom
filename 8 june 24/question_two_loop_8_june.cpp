//
//Q.2>WAP to take input n from the user.
//
//if n is positive,display msg "repeat" n times in new line.
//if n is negative,display msg "over"  1 time

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number:";
	cin>>n;
	if(n>0){
		while(n>=1){
			cout<<"repeat"<<endl;
			n--;
		}
	}
	if(n<0){
		cout<<"over";
	}
}
