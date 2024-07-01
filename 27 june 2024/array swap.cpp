//WAP to copy the elements of one array into another array.
#include<iostream>
using namespace std;
int main()
{
   int arr[4]={24,25,26,27};
   int arr1[4];
   int i=0;
   while(i<4){
   	arr1[i]=arr[i];
   	i++;
   }
   i=3;
   while(i>=0){
   	cout<<arr1[i]<<" ";
   	i--;
   }
}

