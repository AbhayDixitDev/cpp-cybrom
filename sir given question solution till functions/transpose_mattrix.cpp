//Q.2(i) Write a  program to find transpose of a matrix.

#include <iostream>
using namespace std;

int transpose(int arr[][3],int len){
	int transarr[3][3]={};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			transarr[i][j]=arr[j][i];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<transarr[i][j]<<"  ";
		}
		cout<<endl;
	}
	
}
int main(){
	int arr[3][3]={25,35,14,54,24,68,78,45,98};
	int len=sizeof(arr)/sizeof(arr[0]);
	transpose(arr,len);
	
}

