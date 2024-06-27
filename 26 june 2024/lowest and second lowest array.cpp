//Q.3) WAP to find lowest and second lowest element in an array.

#include<iostream>
using namespace std;
int main()
{
	
	int arr[9]={12,51,45,24,84,45,3,1,45};
	int low,slow;
	if(arr[0]<arr[1]){
		low=arr[0];
        slow=arr[1];
		
	}
	else{
			low=arr[1];
        slow=arr[0];
	}
	
	for(int i=2;i<9;i++){
		if(arr[i]<low){
			slow=low;
			low=arr[i];
		}
	}
	cout<<"lowest and second slowest is "<<low<<" & "<<slow;

}

