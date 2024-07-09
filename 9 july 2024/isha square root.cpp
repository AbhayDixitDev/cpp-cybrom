#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number to find out its square root:";
	cin>>n;
	bool check=true;
	for(int i=1;i<n;i++){
		if(i*i==n){
			check=false;
			cout<<i;
			break;
		}
		else{
			check=true;
		}
	}
	if(check==true){
		cout<<"it is not a perfect square root";
	}
}
