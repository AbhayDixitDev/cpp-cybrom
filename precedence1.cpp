#include<iostream>
using namespace std;
int main()
{
//  int r=4+5/5*2/1+9;  // left to right associativity
//  cout<<r;

//int a=90;
//int b=67,c=6,d=30,e=2;
//int r;
//r=a>b>c>d;  // left to right associativity a>b = 1 1>c = 0 , 0>d=0
//cout<<r<<endl;
//int a=90;
//int b=67,c=6,d=30,e=2;
//int r;
////r=92>>2;
//r=a+b/40*2>>2&&d+e/c;  // left to right associativity 67/40=1 2/6=0 90+1*2>>2&&30+0 92>>2&& 30 =23&& 30 = 
////value other than 0 in logical and treated as 1 so 1&&1=1
//cout<<r<<endl;

int a;
cout<<"enter a number";
cin>>a;
a%2==0? cout<<"even" : cout<<"odd";//ternary operator
}

