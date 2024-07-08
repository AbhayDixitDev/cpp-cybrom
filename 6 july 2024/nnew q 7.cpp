#include<iostream>
using namespace std;
int main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	int position=3;
	for(int i=position;i<7;i++){
		arr[i]=arr[i+1];
	}
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}

}

