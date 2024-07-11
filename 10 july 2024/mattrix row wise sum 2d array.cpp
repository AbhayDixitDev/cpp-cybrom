// 2) Row wise addition 
//       
//      1         1         2      ====Ò           4
//      5         6         7      ====Ò          18
//      5         5         5      ====Ò          15
//

#include<iostream>
using namespace std;
int main()
{
	int data[3][3]={1,1,2,5,6,7,5,5,5};
	for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<3;j++){
			cout<<data[i][j]<<" ";
			sum=sum+data[i][j];
		}
		cout<<"======>     "<<sum<<endl;
	}
}

