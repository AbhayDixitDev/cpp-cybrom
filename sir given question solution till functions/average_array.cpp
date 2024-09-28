//Q.6) Implement a function that takes an integer array and its size as parameters and returns the average of the array elements.

#include <iostream>
using namespace std;

int averageArray(int arr[],int len){
	double average=0.0;
	int sum=0;
	for(int i=0;i<len;i++){
		sum=sum+arr[i];
	}
	average=sum/len;
	return average;
}

int main(){
	int array[]={2,5,12,50,15,48,20,64,80};
	int len=sizeof(array)/sizeof(array[0]);
	cout<<"Average of Array is:"<<averageArray(array,len);
}
