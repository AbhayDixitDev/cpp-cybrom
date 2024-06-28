//unique numbers prints in array
#include<iostream>
using namespace std;
int main(){
	int arr[8]={1,2,1,3,4,5,4,6};
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
