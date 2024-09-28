//5-->WAP to print all armstrong number in given range.
//parameter -->int,int(range)
//return --->no return

#include<iostream>
#include<cmath>
using namespace std;
void armstrong(int num,int last1){
	int num1=num,last2=last1;
	for(int i=num1;i<=last2;i++){
		int last=0,temp=i,power=0,size=0,arm=0;
		size=0;
	while(i>0)
	{		
		i=i/10;	
		size++;
	}
//	cout<<size;
    i=temp;
    
    while(i>0){
    	
    	last=i%10;
    	power=pow(last,size);
    	arm=arm+power;
		i=i/10;
		
	}
	if(arm==temp){
		cout<<arm<<endl;
	}
     i=temp;
	}
	}
int main(){
	int num,last;
	cout<<"enter a range to check between armstrong number or not:";
	cin>>num>>last;
	armstrong(num,last);
}
