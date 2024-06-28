//WAP to count all odd element in an array, and display result.

#include<iostream>
using namespace std;
int main()
{
	
	int n,sum=0;
	cout<<"enter size of array:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"enter a number for array:";
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
		sum++;
	}
	
	}
	cout<<"count of odd number is:"<<sum;


}

