//WAP to create an array with n even elements. (hint: use while loop instead of for)

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size of array:";
	cin>>n;
	int arr[n];
	int i=0,even;
	while(i<n){
		even=0;
		cout<<"enter value for array:";
		cin>>even;
		if(even%2==0){	
		arr[i]=even;
		i++;
		}
		else{
			cout<<"entered number is not even:"<<endl;
		}
	}
	i=0;
	while(i<n){
		cout<<arr[i]<<" ";
		i++;
	}

}

