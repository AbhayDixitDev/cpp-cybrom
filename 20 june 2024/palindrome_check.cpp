//armstrong number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int i,range;
	cout<<"enter two numbers for range to find out armstrong numbers between given range:";
	cin>>i>>range;
	if(i>range){
		i=i+range;
	    range=i-range;	
		i=i-range;				
	}
	while(i<=range)	
	{ 
	    int n,last,sum=0,count=0,power;
	    
		n=i;
		
		while(n>0){		
		count++;
		n=n/10;		
	    }
	    
		n=i;
		
		while(n>0){
		last=n%10;
		power=pow(last,count);
		sum=sum+power;
		n=n/10;
     	}
     	
	    if(i==sum){
		cout<<i<<"  is a armstrong number"<<endl;		
     	}
     	
	    i++;
	    
     	}


}
