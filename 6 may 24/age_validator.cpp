//write a program to verify age

#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter Your Age"<<endl;
	cin>>age;
	cout<<(age>=0)<<endl;// single condition 
	cout<<(age>=0 && age <=125)<<endl; // multi condition operator
	
	char ch;
	cout<<"Enter a character"<<endl;
	cin>>ch;
	int r=ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'; //write a program to verify given character is vowel or not
	cout<<"Vowel:"<<"\t"<<r<<endl;
	
}
