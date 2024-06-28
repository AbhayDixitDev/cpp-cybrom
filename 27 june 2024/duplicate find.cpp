//Q.1) WAP to find how many duplicate elements are present in our array.
//(duplicate element has a frequency of more than 1)
#include<iostream>
using namespace std;
int main()
{
   int arr[8]={1,2,3,4,4,3,7,6};
   for(int i=0;i<8;i++){
   	for(int j=i+1;j<8;j++){
   		if(arr[i]==arr[j]){
   			cout<<"Duplicate number at index:"<<i<<" and number is:"<<arr[i]<<endl;
		   }
	   }
   }
}



