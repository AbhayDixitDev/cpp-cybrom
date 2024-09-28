//write a program to Check Whether a Given Number is Prime or Not
#include<iostream>
using namespace std;
int main()
{
   int n,i=2;
   cout<<"enter a number to check whether it is a prime number or not:";
   cin>>n;
   bool isprime=true;
   while(i<=n/2){
   	if(n%i==0){
   		isprime=false;
        break;   	
   		
	   }
	   i++;
   }
   if(isprime==true){
   	cout<<"number is a prime number";
   }
   if(isprime==false)
   	cout<<"it is not a prime number";
   
}

