
#include<iostream>
using namespace std;
int main()
{
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=i-1;j++){
			cout<<" ";
		}
		for(int k=5;k>=i;k--){
			for(char ch='a';ch>='a';ch++ ){
				cout<<ch;
				if(k>=i){
				break;	
				}
				
			}
		}
		
		cout<<endl;
	}

}

