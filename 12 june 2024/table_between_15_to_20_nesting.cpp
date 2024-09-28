//WAP to display tables from 15 to 20


#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=20;i++){
		cout<<"Table of "<<i<<" is:"<<endl;
		for(int j=1;j<=10;j++){
			
			cout<<i<<" * "<<j<<"="<< i*j<<endl;
		}
		cout<<endl;
	}

}

