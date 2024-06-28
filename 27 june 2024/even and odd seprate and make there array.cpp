//WAP to separate odd and even integers into separate arrays.

#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"enter size of array:";
	cin>>n;
	int arr[n],e_arr[n],o_arr[n],elen=0,olen=0;
	for(int i=0;i<n;i++){
		cout<<"enter a number for array:";
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
		for(int j=0;j<n;j++){
			o_arr[j]=arr[i];
			
		}
		olen++;
	}
		int j=0;
		
		while(arr[i]%2==0){
			e_arr[j]=arr[i];
			cout<<e_arr[i]<<" ";
			j++;
			elen++;
			
		}
		
	
	
	}
	cout<<elen<<" "<<olen;
	cout<<endl;
	cout<<"even array:";
	for(int i=0;i<elen;i++){
		cout<<e_arr[i]<<" ";
	}
	cout<<endl;
	cout<<"odd array:";
	for(int i=0;i<olen;i++){
		cout<<o_arr[i]<<" ";
	}


}

