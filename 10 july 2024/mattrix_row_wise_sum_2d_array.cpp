// 2) Row wise addition 
//       
//      1         1         2      ====�           4
//      5         6         7      ====�          18
//      5         5         5      ====�          15
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

