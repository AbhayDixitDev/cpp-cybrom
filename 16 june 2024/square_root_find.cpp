//Write a program to find the square root of valid number?
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number to find its square root: ";
    cin>>num;
//    float ans=sqrt(num);   //trick 1
//    cout<<ans;
    
    
    for(int i=num;i>=1;i--){     //trick 2
    	if(num/i==i){
    		cout<<"square root is:"<<i<<endl;
		}      	    	
	}
	
}

