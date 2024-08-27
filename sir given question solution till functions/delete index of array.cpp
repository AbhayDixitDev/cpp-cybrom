//Write a program to delete the element of an array using index position.

#include<iostream>
using namespace std;

void deleteindexarr(int arr[],int &len,int index){
	for(int i=index;i<len;i++){
		arr[i]=arr[i+1];
	}
	len=len-1;
}

int main(){
	int arr[]={25,54,68,25,68,54,87,98};
	int len=sizeof(arr)/sizeof(arr[0]);
	int index=0;
	cout<<"Enter Index number which you want to delete from array:";
	cin>>index;
	deleteindexarr(arr,len,index);
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
}
