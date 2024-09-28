//wap to find the lowest digit in a number n;
#include<iostream>
using namespace std;
int main()
{
	long long n;
	cout<<"enter a number";
	cin>>n;
	if(n<0){
		n=n*-1;
	}
	int max=9,last;
	for(int i=1;n>0;i++){
		last=n%10;
		n=n/10;
//		cout<<last;
		if(last<max){
			max=last;
		}
		
	}
	cout<<max;

}

