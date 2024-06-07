//wap a program to determine wheather a number is armstrong number or not
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	int n1,sum=0,r;
	cout<<"enter a number to chech whether it is a armsrong number or not:";
	cin>>n1;
	int n2=n1;
	int n3=n1;
	int count=1;

	
	
	while(n3>0){ // loop to find out numbers length
//		cout<<count;
	    if(n3/10>0)
		count++;// numbers length
		n3=n3/10;
		
	
			
		
	}
	while(n2>0){ // loop to check armstrong number
		r=n2%10;	
		int base=r;
	int expo=count;
      	int power=pow(base,expo); // power of number with numbers length ex for 153 3 to the power 3 
		
		sum=sum+power;
		n2=n2/10;		
		
	}
	if(n1==sum){
		cout<<"it is a armstong number";
	}
	else{	
	cout<<"it is not a armstrong number";
}
	
	

}

