#include<iostream>
using namespace std;
int main()
{
	int n,last;
	cout<<"enter a number:";
	cin>>n;
	bool number=false;
	while(n>0){
		last=n%10;
		if(last==7){
			number=true;
			break;
		}
		
		n=n/10;
	}
	if(number == true){
		cout<<"yes";
	}
	else
	cout<<"no";
	

}

