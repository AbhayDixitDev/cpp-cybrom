//wap to find the highest digit in a number n;
#include<iostream>
using namespace std;
int main()
{
	long long n,last=0;
	cout<<"enter a number";
	cin>>n;
	if(n<0){
		n=n*-1;
	}
	int max=0;
	while(n>0){
		last=n%10;
//		cout<<last<<endl;
		if(last>=max){
			max=last;
		}
		n=n/10;
		
		
	}
	cout<<max;

}

