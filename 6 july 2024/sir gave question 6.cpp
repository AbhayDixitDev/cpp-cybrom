//Q.6 Given a sorted array of n elements, find the number of occurrences of each element.
//Input: arr = [4, 4, 8, 8, 8, 15, 16, 23, 23, 53]
//Output: 4=2
//               8=3
//              15=1
//              23=2
//              53=1

#include<iostream>
using namespace std;
int main()
{
	int arr[] = {4, 4, 8, 8, 8, 15, 16, 23, 23, 53};
	int val=arr[0],count,size;
	size=sizeof(arr)/sizeof(int);
	for(int i=0;i<=size;i++){
	
		if(val!=arr[i]){
			cout<<val<<" = "<<count<<endl;
			val=arr[i];
		}
		count=0;
	    if(val==arr[i]){
			for(int j=0;j<size;j++){
				if(val==arr[j])
				count++;
			}						
		}				
	}
}

