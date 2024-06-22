#include<iostream>
using namespace std;
int main()
{
     int n,count;
  
     cout<<"enter a number:";
     cin>>n;
     
     for(int i=2;i<=200;i++){
     	   bool isprime=true;
         for(int j=2;j<=i/2;j++)
         {
         	if(i%j==0){
         		isprime=false;
         		break;
			 }
			 
			 
		 }
		 if(isprime==true){
		 	count++;
		 }
		 if(count==n){
		 	cout<<i<<endl;
		 	break;
		 }
		 
		 
	 }
}


