//Q.4) WAP to find highest and second highest number between 3 discrete value.

#include<iostream>
using namespace std;
int main()
{
	int n,r=0,h=0,sh=0;
	cout<<"enter a number:";
    cin>>n;
    for(int i=1;n>0;i++){
    	r=n%10;
    	n=n/10;
    	if(h<r){
    		if(sh<h)
    		sh=h;
    		h=r;
    		

		}
	}
	cout<<"highest number:"<<h<<endl;
	cout<<"second highest:"<<sh;
	
}
