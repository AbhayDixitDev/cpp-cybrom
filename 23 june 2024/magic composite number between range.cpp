//Q2. A Composite Magic number is a positive integer
//which is composite as well as a magic number.
//Composite number: A composite number is a number
//which has more than two factors.
//For example:
//Factors of IO are: 1, 2, 5, 10
//Magic number: A Magic number is a number in which
//the eventual sum of the digit is equal to 1.
//For example: 28 = 2+8=10: 1+0=1
//Accept two positive integers 'm' and where m is less
//than n. Display the number of composite magic
//integers that are in the range between m and n (both
//inclusive) and output them along with frequency, in the
//format specified below:
//Sample Input:
//m=10 n=100
//Output: The composite magic numbers are
//,100
//Frequency of composite magic numbers: 8
//Sample Input:
//m=120 n=90
//Output: Invalid input

#include<iostream>
using namespace std;
int main(){
	int m,n,num,temp,freq=0;
	
	cout<<"enter two number first one should be smaller than second one:";
	cin>>m>>n;
	if(m>n){
		cout<<"invalid input";
	}
	
	for(int i=m;i<=n;i++){
		int comp=0;
		int last=0;
		int first=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0 ){	
				num=i;	         
		         break;                 				
			}			
		}
	
		         temp=num;
		         while(num>0){		         	
		         	last=num%10;
		        comp=comp+last;
		        num=num/10;
				 }
				 
				 if(temp==10){
				 cout<<"The composite magic numbers are"<<endl;
				 }
				
				 if(temp==10 || comp==1 || comp==10){
				 	
				 	cout<<temp<<" ";
				 	freq++;
				 	
				 }
				 
	    }
	    cout<<endl;
	    cout<<"Frequency of composite magic numbers:"<<freq;
}
