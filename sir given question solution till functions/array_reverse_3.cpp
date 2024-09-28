//Q.3)Write a C++ function that reverses a string.

#include <iostream>
using namespace std;

void reverse(string str){
	string revStr ="";
	for (int i=str.length();i>=0;i--){
		revStr=revStr+str[i];
	}
	cout<<revStr;
	
}

int main(){
	string str="";
	cout<<"Enter a string to reverse:";
	getline(cin,str);
	reverse(str);
}
