#include<iostream>
using namespace std;
int main()
{
	int rsum=0,csum=0;
	
	int arr[3][3]={2,9,7,11,5,1,5,6,2};
	cout<<"Row wise sum of Array:"<<endl;
	for(int i=0;i<3;i++){
		rsum=0;
		for(int j=0;j<3;j++){
			if(j<2)
			cout<<arr[i][j]<<" + ";
			if(j==2)
			cout<<arr[i][j]<<" = ";
			rsum=rsum+arr[i][j];
			
		}
		cout<<rsum<<endl;
	}
	cout<<endl<<"Column wise sum of Array:"<<endl;
	for(int i=0;i<3;i++){
		csum=0;
		for(int j=0;j<3;j++){
			if(j<2)
			cout<<arr[j][i]<<" + ";
			if(j==2)
			cout<<arr[j][i]<<" = ";
			csum=csum+arr[j][i];			
		}
		cout<<csum<<endl;
	}
	cout<<endl;
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

