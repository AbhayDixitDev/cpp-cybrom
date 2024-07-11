//1)Given an array named data ,
//    data[3][3]=           1         1         2
//                          5         6         7
//                          5         5         5 
//
//
//Addition of all  elements ->37

#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int data[3][3]={1,1,2,5,6,7,5,5,5};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sum=sum+data[i][j];			
		}
	}
	cout<<sum;
}





