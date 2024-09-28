//WAP to print all palindrome number in given range
#include<iostream>
using namespace std;
int main()
{
	for(int n=1;n<=10000000;n++){
		int temp=n;
		int last=0;
		int sum=0;
		for(int i=1;n>0;i++)
		{
			last=n%10;
			sum=sum*10+last;
			n=n/10;
			
		}
		n=temp;
		if(sum==n){
			cout<<n<<" number is a palindrome"<<endl;
		}
	}

}

