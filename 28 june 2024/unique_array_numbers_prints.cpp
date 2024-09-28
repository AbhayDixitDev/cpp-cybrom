//unique numbers prints in array
#include<iostream>
using namespace std;
int main(){
	int arr[8]={1,1,23,2,1,56,1,2};
	bool unique;
	for(int i=0;i<8;i++){
		unique=false;
		for(int j=i+1;j<8;j++){
			if(arr[i]==arr[j]){
				unique=true;
				break;				
			}
		}
		if(unique==false){
			cout<<arr[i]<<" ";
		}
	}
	
}
