#include<iostream>
using namespace std;
int main()
{
	int n,max;
	cin>>n;
	if(n>0 && n<=999)
	{
		int n3=n%10;
		n=n/10;
		int n2=n%10;
		n=n/10;
		int n1=n%10;
		cout<<"digits are "<<n1<<"\t"<<n2<<"\t"<<n3<<endl;
		
		if(n1>=n2 && n1>=n3)
		{
			cout<<"greatest digit in number is ="<<n1<<endl;
		}
		else if(n2>=n1 && n2>=n3)
		{
			cout<<"greatest digit in number is ="<<n2<<endl;
		}
		else if(n3>=n1 && n3>=n2){
			cout<<"greatest digit in number is ="<<n3<<endl;
		}
		else
				{
			cout<<"number is not suitable with this program "<<endl;
		}
	}

}

