//1/n+2/n+3/n+4/n----n/n
#include<iostream>
using namespace std;
int main()
{
	double n,i=1;
	double result=0;
	cout<<"enter value for n:";
	cin>>n;
	while(i<=n){
		if(i<n)
		cout<<i<<"/"<<n<<"+";
		else
		cout<<i<<"/"<<n;
		result=result+i/n;
		i++;
		
	}
	cout<<"="<< result;

}

