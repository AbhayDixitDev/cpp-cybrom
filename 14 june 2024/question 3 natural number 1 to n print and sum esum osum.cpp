//Q.3) WAP to take n inputs using any loop , display the addition of 
//1)all number 
//2)only even number
//3)only odd number.

#include<iostream>
using namespace std;
int main()
{
	int n,esum=0,osum=0,sum=0;
	cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
    	sum=sum+i;
    	if(i%2==0){
    		esum=esum+i;
		}
		else{
			osum=osum+i;
		}
	}
	cout<<"Total is:"<<sum<<endl<<",Sum of only even numbers is:"<<esum<<endl<<"and sum of all odd number is:"<<osum;

}

