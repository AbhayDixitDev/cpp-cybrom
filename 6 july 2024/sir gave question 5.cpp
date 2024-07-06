//Q.5 Given a sorted array of n elements, possibly with duplicates, find the number of occurrences of the target element.
//Input: arr = [4, 4, 8, 8, 8, 15, 16, 23, 23, 42], target = 8
//Output: 3

#include<iostream>
using namespace std;
int main()
{
	int arr[] = {4, 4, 8, 8, 8, 15, 16, 23, 23, 42};
	int size=sizeof(arr)/sizeof(int);
	int target,count;
	cout<<"enter target:";
	cin>>target;
	for (int i=0;i<size;i++){
		if(target==arr[i]){
			count++;
		}
	}
	cout<<"target value has come "<<count<<" times in array:";
	

}

