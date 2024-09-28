//Q.2 Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//Note that you must do this in-place without making a copy of the array.
// Example 1:
//Input: nums = [0,1,0,3,12] Output: [1,3,12,0,0]
//Example 2:
//Input: nums = [0] Output: [0]
//Q.3 Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
// Example 1:
//Input: nums = [1,2,3,4,5,6,7], k = 3
//Output: [5,6,7,1,2,3,4]
//Explanation:
//rotate 1 steps to the right: [7,1,2,3,4,5,6]
//rotate 2 steps to the right: [6,7,1,2,3,4,5]
//rotate 3 steps to the right: [5,6,7,1,2,3,4]
//Example 2:
//Input: nums = [-1,-100,3,99], k = 2
//Output: [3,99,-1,-100]


#include<iostream>
using namespace std;
int main(){
	int arr[7]={1,2,3,4,5,6,7},key;
	cout<<"enter key from where you want to rotate array:";
	cin>>key;
	
	for(int i=7-key;i<7;i++){
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<7-key;i++){
		cout<<arr[i]<<" ";
	}
}

