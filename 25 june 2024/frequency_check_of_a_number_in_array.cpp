//find frequency o a specific number

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter item numbers:";
	
	cin>>n;
	int arr[n];
	int speci,freq;
	for(int i=0;i<n;i++){
		cout<<"enter number:";
		cin>>arr[i];
	}
	cout<<"enter a number to finds its frequency in array:";
	cin>>speci;
	for(int i=0;i<n;i++){
		if(arr[i]==speci){
			freq++;
			
		}
	}
	
	
	cout<<"Frequency is:"<<freq;
	
	
}
