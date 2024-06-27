//add all elements,find.average

#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"enter item numbers:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"enter number:";
		cin>>arr[i];
		sum=sum+arr[i];
	}
	cout<<"Average is:"<<sum/n;
	
	
}
