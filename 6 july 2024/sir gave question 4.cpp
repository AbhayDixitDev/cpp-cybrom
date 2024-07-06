//Q.4 Write a C++ program to sort a given array of 0s, 1s and 2s. 
//In the final array put all 0s first, then all 1s and all 2s last. 
//Input:0,1,0,1,0,2,1,2 
//Output:0,0,0,1,1,1,2,2

#include<iostream>
using namespace std;
int main()
{
	int arr[]={0,1,0,1,0,2,1,2};
	int n=sizeof(arr)/sizeof(int);
	int z=0,o=0,t=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			z++;
		}
		if(arr[i]==1){
			o++;
		}
		if(arr[i]==2){
			t++;
		}
	}
	int newArr[n];
	for(int i=0;i<z;i++){		
		newArr[i]=0;
	}
//	o=z+o;
//	cout<<o<<endl;
	for(int i=z;i<z+o;i++){
		newArr[i]=1;
	}
	for(int i=z+o;i<z+o+t;i++){
		newArr[i]=2;
	}
	
	for(int i=0;i<n;i++){
		cout<<newArr[i];
	}

}


