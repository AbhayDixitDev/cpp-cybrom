#include<iostream>
using namespace std;
int main()
{
   int size,sum=0;
   cout<<"enter array size";
   cin>>size;
   int A[size];
   for(int i=0;i<size;i++){
   	cout<<"enter number:";
   	cin>>A[i];
   	sum=sum+A[i];
   }
   cout<<"sum is:"<<sum;
   
}

