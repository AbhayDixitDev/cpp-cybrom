//7)WAP to swap the data of first row  to last row of matrix .
//
//       Input    
//                          1         1         2                           
//                          5         6         7
//                          5         5         5 
//     output
//                          5          5         5
//                          5          6         7
//                          1          1          2


#include<iostream>
using namespace std;
int main(){
	int mat[3][3]={1,1,2,5,6,7,5,5,5};
	for(int i=0;i<1;i++){
		for(int j=0;j<3;j++){
			int temp=mat[i][j];
			mat[i][j]=mat[2][j];
			mat[2][j]=temp;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
