//Priniting table using Goto Statement ?
#include<iostream>
using namespace std;
int main()
{
	
	int n,count=1;
	cout<<"enter a number for table print:";
	cin>>n;
	
	
	
	start:
  if (count <= 10)
    {
      cout<<n<<"*"<<count<<" is:"<<n*count<<endl;
      count++;
      goto start;
    }
} 


