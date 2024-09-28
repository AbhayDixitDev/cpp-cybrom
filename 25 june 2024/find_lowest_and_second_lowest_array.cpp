//find lowest ,second lowest

#include<iostream>
using namespace std;
int main(){
	int n,key;
	cout<<"enter item numbers:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"enter number:";
		cin>>arr[i];
	}
	cout<<"enter a key value which you want to change in array to 0:";
	cin>>key;
	for(int i=0;i<n;i++){
		if(key==arr[i]){
			arr[i]==0;
		}
	}
	cout<<"Average is:"<<sum/n;
}

