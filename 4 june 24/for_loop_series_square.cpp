//1 4 9 16 25 36 49 
#include<iostream>
using namespace std;
int main()
{
 int n,s;
 cout<<"enter a range for series";
 cin>>n;
 for(int i=1; i<=n;i++){
 	s=i*i;
 	cout<<s<<" ";
 }
}

