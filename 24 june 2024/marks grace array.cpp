//wap to create a array with  n elements here elements is actually the marks of a student 
//so you have to give a maximum grace of 5 marks, to the students whose marks is in the 
//range 35-39(passing marks =40);
#include<iostream>
using namespace std;
int main()
{
//	int A[]={23,45,67,78,38,33,35,89,36};
	int size;
   cout<<"Enter marks array size :";
   cin>>size;
   int A[size];
   for(int i=0;i<size;i++){
   	cout<<"enter marks of student "<<i+1<<" :";
   	cin>>A[i];
   }
	int len=sizeof(A)/sizeof(A[0]);
	cout<<"Before Grace marks Array is:"<<endl;
	for(int i=0;i<len;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl<<endl;
	for (int i=0;i<len;i++){
		int grace=0;
		if(A[i]<40 && A[i]>34){
			grace=40-A[i];
			A[i]=A[i]+grace;
			cout<<"Student at index of "<<i<<" get a grace of "<<grace<<" marks"<<endl;
		}
		
		
	}
	cout<<endl<<endl;
	cout<<"After Grace marks Array is:"<<endl;
	for(int i=0;i<len;i++){
		cout<<A[i]<<" ";
	}
	

}

