//wap to add place by even number from user entered number example 2345891 =17;
#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,last,c=1;
	cout<<"enter a testing number:";
	cin>>num;
	
	while(num>0){
		last=num%10;
		sum=sum*10+last;
		num=num/10;
	}
	num=sum;
	sum=0;
	
		
	while(num>0){
		last=num%10;
		if(c%2==0){
			sum=sum+last;
		}
		
		
		num=num/10;
		c++;
	}
	cout<<sum;
	

}

