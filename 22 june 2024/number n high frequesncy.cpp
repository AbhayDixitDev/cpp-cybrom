//1)WAP to find the frequency of highest digit from a number n.
//ex:
//n=2344565
//
//highest number =5
//frequency      =2
#include<iostream>
using namespace std;
int main()
{
	int n,last,count=0,high=0,temp;
	cout<<"enter a number:";
	cin>>n;
	temp=n;
	
	while(n>0){
		last=n%10;
		if(high<=last){
			high=last;
		}
		n=n/10;
		
	}
	cout<<high<<endl;
	n=temp;
	while(n>0){
		last=n%10;
		if(high==last){
			count++;
		}
		n=n/10;
		
	}
	cout<<count;
	

}




