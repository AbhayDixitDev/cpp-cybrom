//6>WAP to print all palindrome number in given range
//parameter -->int,int(range)
//return --->no return


#include<iostream>
using namespace std;
void palin(int num1,int range){
	int last,temp,sum;
	for(int i=num1;i<=range;i++){
		last=0;
		temp=i;
		sum=0;
		while(temp>0){
			last=temp%10;
			sum=sum*10+last;
			temp=temp/10;
		}
		temp=i;
		if(sum==temp){
			cout<<i<<" is a palindrome number"<<endl;
		}
	}
}
int main(){
	int num1,range;
	cout<<"enter range for finding palindrome numbers:";
	cin>>num1>>range;
	palin(num1,range);
}
