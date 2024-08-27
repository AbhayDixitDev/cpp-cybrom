//Write a  program to check whether two matrices are equal or not.

#include <iostream>
using namespace std;

bool check(int arr1[][3],int len1,int arr2[][3],int len2){
	bool check=false;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr1[i][j]==arr2[i][j]){
				check=true;
			}
			else
			check=false;
		}
	}
	return check;
	
}
int main(){
	int arr1[3][3]={25,35,14,54,24,68,78,45,98};
	int arr2[3][3]={25,35,14,54,24,68,78,45,98};
	int len1=sizeof(arr1)/sizeof(arr1[0]);
	int len2=sizeof(arr2)/sizeof(arr2[0]);
	int check1=check(arr1,len1,arr2,len2);
	if(check1){
		cout<<"Mattrix are equal";
	}
	else
	cout<<"Mattrix are not equal";
	
	
}

