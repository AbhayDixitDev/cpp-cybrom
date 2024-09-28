//Q.4) Given an array of size n-1 such that it only contains distinct integers in the range of 1 to n. display the missing element.
//Examples:
//Input: n = 5, arr[] = {1,2,3,5} Output: 4
//Input: n = 2, arr[] = {1} Output: 2


#include<iostream>
using namespace std;
int main()
{
	
	
	int arr[5]={1,2,3,5};
	for(int i=1;i<=5;i++){
		bool found=false;
		for(int j=0;j<4;j++){
			if(arr[j]==i){
				found=true;		
				break;		
			}
			
		}
		if(found==false){
			cout<<i<<" is missing in array at index "<<i-1<<endl;
		}
	}

}

