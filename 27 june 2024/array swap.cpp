//WAP to create an array with n even elements. (hint: use while loop instead of for)
#include<iostream>
using namespace std;
int main()
{
   int arr[4]={24,25,26,27};
   int arr1[4];
   int i=0;
   while(i<4){
   	arr1[i]=arr[i];
   	cout<<arr1[i]<<" ";
   	i++;
   }
}

