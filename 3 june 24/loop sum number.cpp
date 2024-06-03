//write a program to find the sum of n numbers and display result
#include<iostream>
using namespace std;
int main()
{
	int n;
	int num,sum=0,even=0,odd=0;
	cout<<"enter a number:";
	cin>>n;
	for(int i=1;i<=n;i++){
	    cout<<"enter a num to add:";
	    cin>>num;
	    sum=sum+num;
	    if(num%2==0){
	    	even=even+num;
		}
		else {
			odd=odd+num;
		}
	    
		
	}
		cout<<"sum of even numbers is :"<<even<<endl;
			cout<<"sum of odd numbers is :"<<odd<<endl;
	cout<<"sum of all numbers is :"<<sum<<endl;
		cout<<"average is :"<<sum/(float)n;

}

