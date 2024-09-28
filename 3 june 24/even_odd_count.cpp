//write a program to find the sum of n numbers and display result
#include<iostream>
using namespace std;
int main()
{
	int n;
	int e=0,o=0;
	int num,sum=0,even=0,odd=0;
	cout<<"enter a number:";
	cin>>n;
	for(int i=1;i<=n;i++){
	    cout<<"enter a num to add:";
	    cin>>num;
	    sum=sum+num;
	    if(num%2==0){
	    	e= e+1;
	    	even=even+num;
		}
		else {
			odd=odd+num;
			o=o+1;
		}
	    
		
	}
		cout<<"sum of even numbers is :"<<even<<endl;
			cout<<"sum of odd numbers is :"<<odd<<endl;
	cout<<"sum of all numbers is :"<<sum<<endl;
		cout<<"average is :"<<sum/(float)n<<endl;
			cout<<"cout of even numbers :"<<e<<endl;
				cout<<"cout of odd numbers :"<<o<<endl;
		

}

