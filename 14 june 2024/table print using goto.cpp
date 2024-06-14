//  table print using goto statement
#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"enter a number for table printing:";
	cin>>n;
	cout<<"Table of "<<n<<endl;
	table:{
	     if(i>=1 && i<=10){
	        cout<<n<<" * "<< i<<" ="<<n*i<<endl;
	        i++;
	     	
		 }
		 else{
		 	return 0;
		 }
	}
	
	goto table;

}

