//1-2+3-4+5-6+7-8----+n;
#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	int result=0;
	cout<<"enter value for n:";
	cin>>n;
	while(i<=n){
	if(i<n){
			if(i%2==0){
			cout<<i<<"+";
		result=result-i;
		}
		else{		
				cout<<i<<"-";
		result=result+i;
		}
		i++;
	}
	else{
			if(i%2==0){
			cout<<i;
		result=result-i;
		}
		else{		
				cout<<i;
		result=result+i;
		}
		i++;
	}
		
	}
	cout<<"="<< result;

}
