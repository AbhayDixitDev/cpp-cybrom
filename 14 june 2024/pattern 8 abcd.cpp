//A 
//A  B
//A B C
//A B C D
//A B C D E

#include<iostream>
using namespace std;
int main()
{ 
    for(int i=1;i<=5;i++){
    	 char ch='A';
    	for(int j=1;j<=i;j++){
    		cout<<ch<<" ";
    		ch++;
    		
		}
		cout<<endl;
	}
}
