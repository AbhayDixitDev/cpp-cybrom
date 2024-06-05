#include<iostream>
using namespace std;
int main(){
	int n1,n2,hcf,small;
	cout<<"enter two number for hcf calculation :";
	cin>>n1>>n2;
	if(n1<n2)
	small=n1;
	else
	small=n2;
	bool is_hcf=false;
	
	for(int i=small; i>=2 ;i--){
		if(n1%i==0 && n2%i==0 ){			
			cout<<"hcf is: "<<i;
			is_hcf=true;
			break;	
					
		}
		
		
	}
	if(is_hcf==false )
	{
		cout<<"no hcf possible";
	}
	

	
}
