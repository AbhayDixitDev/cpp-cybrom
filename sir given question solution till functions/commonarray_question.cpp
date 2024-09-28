//Q.8) Create a C++ program to find the common elements between two arrays. Write a function that returns the common elements in a new array.
#include <iostream>
using namespace std;
void findCommonElements(int arr1[], int size1, int arr2[], int size2, int commonArr[], int &commonSize) { 
for(int i=0;i<size1;i++){
	for(int j=0;j<size2;j++){
		if(arr1[j]==arr2[i]){
			commonArr[commonSize]=arr1[j];
			commonSize++;						
		}
	}
}
for(int i=0;i<commonSize;i++){
	cout<<commonArr[i]<<" ";
}
}

int main(){
	int arr1[]={25,30,15,20,84,52,45};
	int arr2[]={84,65,25,20,45,46,85};
	int sizeofarray1=sizeof(arr1)/sizeof(arr1[0]);
	int sizeofarray2=sizeof(arr2)/sizeof(arr2[0]);
	int commonArr[]={};
	int sizeofcommonArr=0;
	findCommonElements(arr1,sizeofarray1,arr2,sizeofarray2,commonArr,sizeofcommonArr);
	
}

