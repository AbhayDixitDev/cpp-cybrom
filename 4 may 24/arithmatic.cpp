#include<iostream>
using namespace std;
int main()
{
int a=5;
int c;
a+=5;
c=a++;  //PostFix increment

cout<<a<<endl;
cout<<c<<endl;

c=++a;  //prefix increment
cout<<a<<endl;
cout<<c<<endl;

c=a--;  //PostFix decrement

cout<<a<<endl;
cout<<c<<endl;

c=--a;  //prefix decrement
cout<<a<<endl;
cout<<c<<endl;
	
double b=3.6;
int x =2;
x += b;
cout<<x<<endl; //output type will be variable type like if x is int then output is int otherwise double so double
}
