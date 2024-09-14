#include<iostream>
using namespace std;

int main(){
	int array[]={9,3,5,7,1};
	int size=sizeof(array)/sizeof(int);
//	cout<<size;
	
	for(int i=0;i<size;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int j=0;j<(5-i);j++){
			cout<<array[j]<<" ";
		}
		cout<<endl;
	}
}