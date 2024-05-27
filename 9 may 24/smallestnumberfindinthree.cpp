#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"enter three numbers for smallest find "<<endl;
	cin>>n1>>n2>>n3;
	cout<<"numbers are "<<n1<<"\t"<<n2<<"\t"<<n3<<endl;
		
		if(n1<=n2 && n1<=n3)
		{
			cout<<"smallest number is ="<<n1<<endl;
		}
		else if(n2<=n1 && n2<=n3)
		{
			cout<<"smallest number is ="<<n2<<endl;
		}
		else if(n3<=n1 && n3<=n2){
			cout<<"smallest number is ="<<n3<<endl;
		}
		else
				{
			cout<<"numbers are  equal "<<endl;
		}
	

}

