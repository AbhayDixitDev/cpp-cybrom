#include <iostream>
using namespace std;

int main(){
	int n1,n2;
	cout<<"enter two numbers";
	cin>>n1>>n2;
	
	cout<<n1/n2;
	
	while(1){
		n1=n1*n2;
		cout<<n1;
		if(n1==0){
			return 0;
		}
	}
}
