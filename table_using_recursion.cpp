#include <iostream>
using namespace std;

void table(int num,int start){
	if(start>10){
		return;
	}
	cout<<num*start<<endl;
	table(num,start+1);
}

int main(){
	int num;
	cout<<"enter number for table:";
    cin>>num;
    
    table(num,1);
}