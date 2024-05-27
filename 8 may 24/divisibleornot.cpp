#include<iostream>
using namespace std;
int main()
{
 int n1,n2;
 cout<<"enter two numbers"<<endl;
 cin>>n1>>n2;
 cout<< n1<<"&"<<n2<<endl;
 if(n1!=0 && n2!=0)
 {
 	if(n1%n2==0)
 {
 	cout<<"number is divisible"<<endl;
 }
 else{
 	cout<<"number is not divisible"<<endl;
 }
 }
 else
 {
 	cout<<"invalid numbers as input"<<endl;
 }
}

