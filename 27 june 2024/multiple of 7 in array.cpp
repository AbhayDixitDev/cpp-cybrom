//Q.1) WAP to create a array of n integer elements. And  perform following operations.
//d)display elements which are multiple of 7

#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"enter size of array:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"enter a number for array:";
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]%7==0){
		cout<<"multiple of 7 in array are at index:"<<i<<" :";
		cout<<arr[i]<<endl;
	}
	}


}

