#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter a number:";
   cin>>n;
   for(int i=2;i<=n;i){
   	  if(n%i==0){
   	  	cout<<i<<endl;
   	  	n=n/i;
		 }
		 if(n%i!=0){
		 	i++;
		 }
   }
}

