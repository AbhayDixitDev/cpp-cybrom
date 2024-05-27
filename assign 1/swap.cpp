#include<iostream>
using namespace std;
int main()
{
	int a=15;
	int b=20;
	cout<<"a="<<a<<"& b="<<b<<endl;
	int c=a;
	a=b;
	b=c;
    cout<<"a="<<a<<"& b="<<b<<endl;
	
}
