//Write a program to find the factorial value of any number
#include<iostream>
using namespace std;
int main()
{
 int n,facto=1;
 cout<<"enter a number for factorial value :";
 cin>>n;
 for(int i=n;i>=1;i--){
 	facto=facto*i;
 }
 cout<<"factorial of "<< n<<" is :"<< facto;
}


