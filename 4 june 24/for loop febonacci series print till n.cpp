//write a program to print febonacci series up to n terms
//0 and 1 start 
//0+1=1
//0 1 1
//1+1=2
//0112 so on 3581321

//write a program to swap to numbers with each other

#include<iostream>
using namespace std;
int main()
{
 int n,n1=0,n2=1,n3;
 
 cout<<"enter a range number for printing febonacci series till thatnumber :";
 cin>>n;
 	cout<<n1<<" "<<n2<<" ";
 for(int i=1;i<=n-2;i++){
 	n3=n1+n2;
 	cout<<n3<<" ";
 	n1=n2;
 	n2=n3;
 	
 }
  
  
}

