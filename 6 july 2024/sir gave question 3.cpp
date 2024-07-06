//Q.3 Write a C++ program to separate even and odd numbers in a array of integers. 
//Put all even numbers first, and then odd numbers.
// Input: 14,21,6,7,8,3,9
// Output:14,6,8,21,7,3,9
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a size of array:";
	cin>>n;
	int arr[n],evenlen,oddnum;
	for(int i=0;i<n;i++){
		cout<<"Enter value for array:";
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
		  evenlen++;
		}
		else{
			oddnum++;
		}
	}
	int even[evenlen],odd[oddnum],j=0,k=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){			
		  even[j]=arr[i];
		  j++;
		}		
	}
	for(int i=0;i<n;i++){
	    if(arr[i]%2!=0){
		  odd[k]=arr[i];
		  k++;
		}	
	}
	for(int i=0;i<evenlen;i++){
		arr[i]=even[i];
	}
	j=0;
	for(int i=evenlen;i<n;i++){
		if(j<oddnum){	
		arr[i]=odd[j];
		j++;
		}		
	}
	for(int i=0;i<n;i++){
	cout<<arr[i];
	}


}


