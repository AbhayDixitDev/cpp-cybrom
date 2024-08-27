//Q.1 Write a  program to find maximum and minimum element in an array.


#include <iostream>
using namespace std;

void maxandmin(int arr[], int len){
	int max=0,min=0;
	if(arr[0]>arr[1]){
		max=arr[0];
		min=arr[1];
	}
	else{
		max=arr[1];
		min=arr[0];
	}
	for(int i=2;i<len;i++){
		if(arr[i]>max){
			max=arr[i];			
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<"max value is:"<<max<<" min value is:"<<min;
}
int main(){
	int arr[]={25,20,15,2,1,52,62,4};
	int len=sizeof(arr)/sizeof(arr[0]);
	maxandmin(arr,len);
}
