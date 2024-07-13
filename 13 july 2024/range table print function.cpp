//3-->Write a program that ask the user two input . 
//print the multiplication table of that range of numbers(nesting)
//
//parameter -->int,int(range)
//return --->no return

#include<iostream>
using namespace std;
void table(int start,int last){
	for(int i=start;i<=last;i++){
		for(int j=1;j<=10;j++){
			cout<<i<<"*"<<j<<" = "<<i*j<<endl;
		}
		cout<<endl;
	}
}
int main(){
	int start,last;
	cout<<"enter range for tables like 2 to 10:";
	cin>>start>>last;
	table(start,last);
}
