//Q.2) WAP to find the sum of duplicate elements which are present in our array.
//(duplicate element has a frequency of more than 1)

#include<iostream>
using namespace std;
int main()
{
   int arr[10]={1,2,3,4,4,3,7,6,7,6},sum=0;
   for(int i=0;i<10;i++){
   	for(int j=i+1;j<10;j++){
   		if(arr[i]==arr[j]){
   			cout<<arr[i]<<" + ";
   			sum=sum+arr[i];
		   }
	   }
	
   }
   cout<<" = "<<sum;
}

