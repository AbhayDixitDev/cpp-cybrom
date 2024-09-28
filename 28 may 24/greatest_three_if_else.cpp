//Write a C++ program to find maximum between three numbers.
#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"enter three numbers:";
 cin>>a>>b>>c;
 if(a>b && a>c){
 	cout<<a <<" is greater than "<<b<<" and "<<c;
 }
 else if(b>a && b>c){
 	cout<<b <<" is greater than "<<a<<" and "<<c;
 }
 else  if(c>a && c>b){
 	cout<<c <<" is greater than "<<a<<" and "<<b;
 }
 else{
 	cout<<a<<", "<<b<<" and "<<c<<" are equal to each other";
 }
}

