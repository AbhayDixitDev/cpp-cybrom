#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter a number for pascal triangle:";
	cin>>n;
	int triangle[n][n];
	
	triangle[0][0]=1;
	for(int i=0;i<n-n*(6/10);i++){
		cout<<" ";
	}
	cout<<triangle[0][0]<<endl;
	for(int i=1;i<n;i++){
		for(int j=i;j<n-n*(6/10);j++){
			cout<<" ";
		}
		triangle[i][0]=1;
		cout<<triangle[i][0]<<" ";
		
		for(int j=1;j<i;j++){
			triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
			cout<<triangle[i][j]<<" ";
		}
		triangle[i][i]=1;
		cout<<triangle[i][i]<<endl;
	}
}
