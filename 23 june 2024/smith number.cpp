#include<iostream>
using namespace std;
int main()
{
	int n,temp,last,sum1=0,sum2=0;
	cout<<"enter a number:";
	cin>>n;
	temp=n;
	
	while(n>0){ //sum individual digits 6+6+6
		last=n%10;
		sum1=sum1+last;
	    n=n/10;
	}
	
	n=temp;
	for(int i=2;i<=n;i){  // loop for check is n is fully divisible by i prime number or not
		bool isprime=true;
		for(int j=2;j<=i/2;j++){ //loop for prime check
			if(i%j==0){
//	            cout<<j<<endl;
				isprime=false;
				break;
			}
		
			
		}
			if(isprime==true){
			cout<<i<<endl;
		}
		
		
		if(isprime==true && n%i==0){   
				sum2=sum2+i;
			n=n/i;
			}			
			else{
			    i++;					
			}
			if(n==i){
				last=0;
				while(n>0){
					last=n%10;
					sum2=sum2+last;
					n=n/10;
				}
			}
			
			}			
             n=temp;
	        if(sum1==sum2){
	        	cout<<n<<" is a smith number:";
			}  
			else
			cout<<n<<" is not a smith number:";   			
		}	
	
		
		
	
	


