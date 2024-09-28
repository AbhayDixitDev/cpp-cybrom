//Q.1 Problem :Two Pair Sum
//Statement:Given an array of integers nums and an integer target,return indices of the two numbers such that they add up to target.
//Input:v[]={2,4,6,11,8,12}, target=14
//Output:[2,4]

#include<iostream>
using namespace std;
int main(){
	int nums[]={2,4,6,11,8,12};
	int size=sizeof(nums)/sizeof(int);
	int target;
	cout<<"enter target value:";
	cin>>target;
	
	for(int i=0;i<size;i++){
		int a=nums[i];
		for(int j=i+1;j<size;j++){
			int b=nums[j];
			if(a+b==target){
				cout<<"numbers are on array's index "<<i<<" & "<<j<<" and numbers are:"<<a<<" and "<<b<<endl;
				break;
			}
		}
	}
}
