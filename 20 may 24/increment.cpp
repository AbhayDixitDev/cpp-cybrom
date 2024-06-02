#include<iostream>
using namespace std;
int main()
{
	
	int a=90;
	int b=a++;
	cout<<b<<endl;  //post increment pre assign 90
    cout<<a<<endl;  // 91
    int c=90;
	int d=++c;
	cout<<d<<endl; //pre increment post assign 91
	cout<<c<<endl;   // 91
	
	
	

}

