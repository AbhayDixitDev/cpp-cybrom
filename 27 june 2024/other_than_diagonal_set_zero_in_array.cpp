//other than diagonal set zero in array
#include<iostream>
using namespace std;
int main()
{
	
	  int rsum=0,csum=0;
	
	int arr[3][3]={2,9,7,11,5,1,5,6,2};
	
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i!=j){
				arr[i][j]=0;
			}
		}
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

}

