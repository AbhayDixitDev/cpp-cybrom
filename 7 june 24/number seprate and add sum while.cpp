//wap to program take a number from user  number than add indivisual numbes of that number show result
#include<iostream>
using namespace std;
int main()
{
   int n,sum=0;
   cout<<"enter a number: ";
   cin>>n;
   while(n>0){   
   	sum=sum+n%10;
   	n=n/10;
   }
   cout<<"sum of individual numbers:"<<sum;
}

