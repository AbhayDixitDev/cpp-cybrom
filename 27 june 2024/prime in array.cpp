//Q.3) WAP to display  only the prime number which are present in our array.

#include<iostream>
using namespace std;
int main()
{
   int arr[8]={1,2,3,11,4,3,7,6};
   cout<<"primes numbers in array:"<<endl;
   for(int i=0;i<8;i++){
   	bool isprime=true;
   	for(int j=2;j<=arr[i]/2;j++){
   		if(arr[i]%j==0 ){
   			isprime=false;
   			break;
		   }
	   }
	   
	   if(isprime==true && arr[i]>1){
	   	cout<<arr[i]<<" ";
	   }
   	
   	}
   	
}
