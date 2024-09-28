//Write a program for swapping using call by reference using function.

#include <iostream>
using namespace std;

int swapping(int arr[],int len){
	for(int i=0,j=len-1;i<=j;i++,j--){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}
int main(){
	int arr[]={25,35,25,64,87,68,48};
	int len= sizeof(arr)/sizeof(arr[0]);
	swapping(arr,len);
	
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	
}
