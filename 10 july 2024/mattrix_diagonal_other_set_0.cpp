//5)  WAP to manipulate all element to 0, except diagonal element.
//       Input    
//                          1         1         2                           
//                          5         6         7
//                          5         5         5 
//     output
//                          1         0         0                           
//                          0         6         0
//                          0         0         5 


#include<iostream>
using namespace std;
int main(){
	int mat[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"enter number for mattrix/array:";
			cin>>mat[i][j];
			if(i!=j){
				mat[i][j]=0;
			}
		}
		
	}
	
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
		
	}
	
	
}
