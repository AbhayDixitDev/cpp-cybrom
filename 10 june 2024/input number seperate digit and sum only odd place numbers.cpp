//Even numbers positions sum example inout 2345= 3+5=8

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,count=0,sum=0;
	cout<<"Enter a number ";
	cin>>n;
	int n1=n;
	while(n>0)
	{
		n=n/10;
		count++;
	}

	cout<<" length = "<<count<<endl;
		int power=pow(10,count-1);
 int i=1;
while(n1!=0  && i>0)
{       
		int power=pow(10,count-1);
			int n2;
		n2=n1/power;
		cout<<"n2 is "<<n2<<endl;
	    if(i%2==0){			
			sum=sum+n2;
			cout<<"i is"<<i<<endl;
			
		}
		i++;
	
	n1=n1%power;
	
	count--;
}
cout<<"sum is:"<<sum;
}
