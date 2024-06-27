//WAP to find the highest and lowest element in a array
#include<iostream>
using namespace std;
int main()
{
	int marks[]={34,56,12,34,56,7,89,11},high,secondhighest,low;
	
	if(marks[0]>marks[1]){
		high=marks[0];
		secondhighest=marks[1];
	}
	else{
		high=marks[1];
		secondhighest=marks[0];
	}
	
	low=secondhighest;
	for(int i=2;i<8;i++){
		
		if( marks[i]>high)
			{
				high=marks[i];
					
	    
			}
			else if(marks[i]>secondhighest && high>=marks[i])
			secondhighest=marks[i];	
		
		if(marks[i]<low){
			low=marks[i];
		}
	}
	cout<<"highest number is:"<<high<<endl;
	cout<<"Second highest number is:"<<secondhighest<<endl;
	cout<<"lowest number is:"<<low<<endl;
	

}

