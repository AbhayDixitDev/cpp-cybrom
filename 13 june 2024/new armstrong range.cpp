//wap a program to determine wheather a number is armstrong number or not
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int last=0,sum=0,power,count=0,temp=0;
	for(int n=100;n<=10000000000;n++){
		sum=0;
		last=0;
		power=0;
		count=0;
		temp=n;
		for(int i=1;n>0;i++){
			n=n/10;
			count=i;
			
		}
//		cout<<count<<endl;
		n=temp;
		for(int j=1;n>0;j++){
			last=n%10;
			power=pow(last,count);
			sum=sum+power;
			n=n/10;
		}
		if(sum==temp)
		cout<<sum<<endl;
		n=temp;
	}

}

