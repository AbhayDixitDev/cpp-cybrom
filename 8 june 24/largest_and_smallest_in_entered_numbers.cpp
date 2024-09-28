//Write a program to enter the numbers till the user wants and at the end the program
// should display the largest and smallest numbers entered
#include<iostream>
using namespace std;
int main()
{
	int check=1,l=0,sm=0;
	
	int n1;
    while(check==1){
    	cout<<"enter number:";
    	cin>>n1;
    	if(l<n1){
    		l=n1;
		}
		if(sm>n1){
			sm=n1;
		}
	
		
		
		cout<<"enter 1 to continue entering number otherwise press any other number";
		cin>>check;
		
    	
    	
	}
	cout<<"largest and smallest entered numbers:"<<l<<" "<<sm;

}

