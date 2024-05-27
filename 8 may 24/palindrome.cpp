#include<iostream>
using namespace std;
int main()
{
int n,rev=0;
cout<<"enter three digit number"<<endl;
cin>>n;
int num=n;
if(n>=100 && n<=999)
{
  rev=(rev*10)+ n%10;
  n=n/10;
  rev=(rev*10)+ n%10;
  n=n/10;
  rev=(rev*10)+ n%10;
  n=n/10;
  if(num==rev){
  	cout<<"number is palindrome"<<endl;
  }
  else
  {
  	cout<<"number is not palindrome"<<endl;
  }
  	
}
else{
	cout<<"enter a valid three digit number"<<endl;
}
}

