//3) Column wise addition
//
//
//                          1         1         2
//                          5         6         7
//                          5         5         5 
// --------------------------------------------------------                         
//                         11       12          14


#include<iostream>
using namespace std;
int main()
{
		int cs[3];
	int data[3][3]={1,1,2,5,6,7,5,5,5};
	for(int i=0;i<3;i++){
	
		int sum=0;
		for(int j=0;j<3;j++){
			cout<<data[i][j]<<"  ";
			sum=sum+data[j][i];
		}
		cout<<endl;
		cs[i]=sum;
	}
	for(int i=0;i<10;i++){
		cout<<"-";
	}
	cout<<endl;
	for(int i=0;i<3;i++){
		cout<<cs[i]<<" ";
	}
}

