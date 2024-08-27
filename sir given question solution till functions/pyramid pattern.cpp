//Write a program to print full pyramid pattern.

#include <iostream>
using namespace std;

int pattern(int n){
	for(int i=n;i>=1;i--){
		for(int j=1;j<i;j++){
			cout<<" ";
		}
		for(int j=i;j<n;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	
}

int main(){
	int number=0;
	cout<<"enter a number for pyramid rows:";
	cin>>number;
	
	pattern(number);
}
