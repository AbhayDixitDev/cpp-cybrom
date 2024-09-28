//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//Note that you must do this in-place without making a copy of the array.
// Example 1:
//Input: nums = [0,1,0,3,12] Output: [1,3,12,0,0]
//Example 2:
//Input: nums = [0] Output: [0]


#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter array length:";
	cin>>n;
	int nums[n];
	
	for(int i=0;i<n;i++){
		cout<<"enter array elements:";
		cin>>nums[i];

	}
	int n1=0;
	for(int i=0;i<n;i++){		
		if(nums[i]!=0){			
			int n2=0;
			n2=nums[i];
			nums[n1]=n2;
			n1++;				
		}
	}

	for(int i=n1;i<n;i++){
		nums[i]=0;
	}
		for(int i=0;i<n;i++){
		cout<<nums[i]<<" ";
	}

}


