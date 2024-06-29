//unique numbers prints in array
#include<iostream>
using namespace std;
int main(){
	int arr[8]={1,1,23,2,1,56,1,2};
	bool unique;
	int arrb[8]={arr[0]};
	int c=0;
	cout<<arrb[c]<<" ";
	for(int i=1;i<8;i++){
		unique=true;
		for(int j=0;j<=c;j++){
			if(arrb[j]==arr[i]){
				unique=false;
				break;				
			}
		}
		if(unique==true){
			c++;
			arrb[c]=arr[i];
			cout<<arrb[c]<<" ";
			
		}
	}
//	for(int i=0;i<=c;i++){
//		cout<<arrb[i]<<" ";
//	}
	
}
