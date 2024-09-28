#include<iostream>
using namespace std;
void table(int num,int n ){
	if(n>10)
		return;
	
//		table(num,n+1);  // head recursion on top
	    cout<<num*n<<endl;
		table(num,n+1);  // tail recursion on down 
			
}
int main(){
	int num,n=1;
	cout<<"enter number for table:";
	cin>>num;
	table(num,n);
}
