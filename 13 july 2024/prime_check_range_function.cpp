//4-->WAP to print all prime number in given range. 
//parameter -->int,int(range)
//return --->no return

#include<iostream>
using namespace std;
void prime(int start,int last){
	bool isprime=true;
	for(int i=start;i<=last;i++){
		isprime=true;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				isprime=false;
				break;
			}
		}
		if(isprime==true){
			cout<<i<<endl;
		}
	}
	
}
int main(){
	int start,last;
	cout<<"enter range in between you want to find prime numbers:";
	cin>>start>>last;
	prime(start,last);
}
