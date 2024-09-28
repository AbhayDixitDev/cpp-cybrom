//4) Add diagonal element
//
//
//                          1         1         2
//                          5         6         7
//                          5         5         5 
//
//Addition of  1st diagonal element  00+11+22  -> 12
//Addition of  2nd diagonal element 02 +11+20 ->  13

#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int data[3][3]={1,1,2,5,6,7,5,5,5};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j)
			sum=sum+data[i][j];			
		}
	}
	cout<<"Addition of  1st diagonal is "<<sum<<endl;
	sum=0;int j=2;
		for(int i=0;i<3;i++){
			sum=sum+data[j][i];	
			j--;		
		}
	
	cout<<"Addition of  2st diagonal is "<<sum;
}
