//2+3+4+5 = we will add odd place values like 2+4=6
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	int i=1;
	int count=0;
	while(n>0){
		if(n%10==0)
	 	count++;
	 	n=n/10;
	    n++;
		
		
	}
	cout<<count;
	

}

