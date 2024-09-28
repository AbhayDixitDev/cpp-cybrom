#include<iostream>
using namespace std;
int main()
{
	int size;
   cout<<"Enter  array size :";
   cin>>size;
   int A[size];
   for(int i=0;i<size;i++){
   	cout<<"enter numbers for index "<<i<<" :";
   	cin>>A[i];
   }
	int len=sizeof(A)/sizeof(A[0]);
	int key;
	cout<<"enter key element:";
	cin>>key;
	int count=0;
	for(int i=0;i<len;i++){
		if(A[i]==key){
		A[i]=0;
		count++;
	}
		
	}
	
	cout<<"array is:"<<endl;
		for(int i=0;i<len;i++){
		cout<<A[i]<<" ";
	}
		if(count>0)
	cout<<endl<<"key values found:"<<count;
	if(count==0){
	cout<<endl<<"key values not found";	
	}

}

