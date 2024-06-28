//WAP to create an array with n even elements. (hint: use while loop instead of for)

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size of array:";
	cin>>n;
	int arr[n];
	int i=0;
	while(i<n){
		cout<<"enter value for array:";
		cin>>arr[i];
		i++;
	}
	i=0;
	while(i<n){
		cout<<arr[i]<<" ";
		i++;
	}

}

