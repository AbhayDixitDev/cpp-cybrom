//WAP to separate odd and even integers into separate arrays.

#include<iostream>
using namespace std;
int main()
{   
    int n,elen,olen;
    cout<<"enter a size of array:";
    cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cout<<"enter a number for index "<<i<<" :";
		cin>>arr[i];
		if(arr[i]%2==0){
			elen++;
		}
		else
		olen++;
	}
	int earr[elen],oarr[olen];
	cout<<"even numbers array:";
	int j=0;
	for(int i=0;i<n;i++){
	 if(arr[i]%2==0){
	 		earr[j]=arr[i];
	 		cout<<earr[j]<<" ";
	 		j++;		
		}
		
	}
		cout<<endl<<"odd numbers array:";
	int k=0;
	for(int i=0;i<n;i++){
	 if(arr[i]%2!=0){
	 		oarr[k]=arr[i];
	 		cout<<oarr[k]<<" ";
	 		k++;		
		}
		
	}
	
	
	

}

