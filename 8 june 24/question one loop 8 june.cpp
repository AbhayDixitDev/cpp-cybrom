//Q.1>WAP to take input n from the user.
//
//if n is positive,display A to Z characters
//                         (ascending order)
//if n is negative,display z to a  characters
//                         (descending order)
//if n is zero,display all vowels
//                         (a,e,i,o,u)

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	if(n>0){
		char ch='A';
		while(ch<='Z'){
			cout<<ch<<endl;
			ch++;
		}
	}
	if(n<0){
		char ch='z';
		while(ch>='a'){
			cout<<ch<<endl;
			ch--;
		}
	}
	if(n==0){
	    cout<<" a,e,i,o,u";
	}

}

