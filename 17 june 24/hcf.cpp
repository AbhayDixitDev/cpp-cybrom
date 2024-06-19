#include<iostream>
using namespace std;
int main()
{
	int n1,n2,min,hcf;
	cout<<"enter two numbers for hcf:";
	cin>>n1>>n2;
	if(n1<n2){
		min=n1;
	}
	else{
		min=n2;
	}
	for(int i=2;i<=min;i++){
		if(n1%i==0 && n2%i==0){
			hcf=i;
		}

	}
cout<<"HCf of "<<n1<<" and "<<n2<<" is:"<<hcf<<endl;
}

