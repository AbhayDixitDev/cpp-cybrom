//
//Write a program to print all alphabets from a to z using loop
//Except vowels .

#include<iostream>
using namespace std;
int main()
{
	
	for(char i='a';i<='z';i++){
		if(i!='a'&&i!='e'&&i!='i'&&i!='o'&&i!='u'){
			cout<<i<<endl;;
		}
	}

}

