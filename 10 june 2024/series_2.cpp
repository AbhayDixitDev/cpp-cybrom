//1/1+1/2+1/3+1/4+1/n
#include<iostream>
using namespace std;
int main()
{
	double n=1,n1;
	double result=0;
	cout<<"enter value for n:";
	cin>>n1;
	while(n<=n1){
		if(n<n1)
		cout<<1<<"/"<<n<<"+";
		else
		cout<<1<<"/"<<n;
		result=result+1/n;
		n++;
		
	}
	cout<<"="<< result;

}

