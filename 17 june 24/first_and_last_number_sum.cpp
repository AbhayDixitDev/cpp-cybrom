//Q.2 Write a program to find the sum of first and last digit of any number.
//Note:( Number should be greater than 2 digit else it is invalid)

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,count,power,last,first;
	cout<<"enter a number number must be greater than two digits:";
	cin>>n;
	int temp=n;

	if(n>99){
		for(int i=1;n>0;i++){
//			last=n%10;
			n=n/10;
			count++;
		}
		power=pow(10,count-1);
//		cout<<count;
        first=temp/power;
//        cout<<first<<endl;
        last=temp%10;
//        cout<<last<<endl;
        
        cout<<"sum of first and last digit is :"<<first+last;
        
        
	}
}

