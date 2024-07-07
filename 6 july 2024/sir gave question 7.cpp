//Q.7 Delete the specific position from an array.
//Input: arr = [9,3,2,1,5,23,10,4],position=3
//Output: [9,3,2,5,23,10,4]
#include<iostream>
using namespace std;
int main(){
	int arr[]={9,3,2,1,5,23,10,4};
	int position;
	int size=sizeof(arr)/sizeof(int);
	int arr1[size-1];
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"enter a position which you want to remove from array between: 0 & "<<size<<" :";
	cin>>position;
    int j=0;
	for(int i=0;i<size;i){
	    arr1[j]=arr[i];
	    j++;
	    
		if(i==position-1){
			i=i+2;
		}
		else{
			i++;
		}
		  			
	}	
	for(int i=0;i<size-1;i++){
		cout<<arr1[i]<<" ";
	}
	
	
}


