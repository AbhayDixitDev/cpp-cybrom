//Q.2  Write a program to sum of two array. 
//Input: A1 = [2, 3, 1, 4]   &  A2= [6] 
//Output: 2320
//Input: A1 = [2, 3, 1, 4]   & A2=[2,3] 
//Output: 2337

#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cout<<"Enter Length or Size of array 1:";
	cin>>n1;
	int A1[n1];
	for(int i=0;i<n1;i++){
		cout<<"enter value for array 1:";
		cin>>A1[i];
	}
	cout<<"Enter Length or Size of array 2:";
	cin>>n2;
	int A2[n2];	
	
	for(int i=0;i<n2;i++){
		cout<<"enter value for array 2:";
		cin>>A2[i];
	}
	int sum1=A1[0],sum2=A2[0];
	if(n1>1){
		for(int i=1;i<n1;i++){
		sum1=sum1*10+A1[i];
	}
	}
	if(n2>1){
		for(int i=1;i<n2;i++){		
		sum2=sum2*10+A2[i];
	}
	}
	
	cout<<sum1<<" + "<<sum2<<endl;
	cout<<"sum of both array is:"<<sum1+sum2;
	
}

