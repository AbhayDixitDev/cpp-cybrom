//Q.4) Given an array of integers, write a C++ function to find the maximum value in the array.

#include <iostream>
using namespace std;

void maxInArray(int arr[],int len){
//	cout<<len;
	int max=arr[0];
for(int i=1;i<len;i++){
	if(max<arr[i]){
		max=arr[i];
	}
}
cout<<"Maximum value of array is :"<<max;
}

int main(){
	int array[]={2,10,5,8,12,20};
	int len=sizeof(array)/sizeof(array[0]);
	
	maxInArray(array,len);
}
