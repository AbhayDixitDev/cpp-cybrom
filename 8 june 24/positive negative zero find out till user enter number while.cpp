//Write a program to enter the numbers till the user wants and at the end 
//it should display the count of positive, negative and zeros entered
#include<iostream>
using namespace std;
int main()
{
	int check=1,p=0,ne=0,zero=0;
	
	int n1;
    while(check==1){
    	cout<<"enter number:";
    	cin>>n1;
    	if(n1>0){
    		p++;
		}
		if(n1<0){
			ne++;
		}
	
		if(n1==0)
		{
			zero++;
		}
		
		cout<<"enter 1 to continue entering number otherwise press any other number";
		cin>>check;
		
    	
    	
	}
	cout<<"positive, negative and zeros in entered numbers:"<<p<<" "<< ne<<" "<<zero;

}

