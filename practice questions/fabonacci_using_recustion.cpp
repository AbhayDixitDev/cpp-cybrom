//2. Fibonacci Series Write a recursive function to generate the Fibonacci series up to a given number.

#include <iostream>
using namespace std;

int fabo(int range,int n1,int n2,int n3){
	if(range<1){
		return 1;
	}
	cout<<n3<<" ";
		n1=n2;
		n2=n3;
		n3=n1+n2;
	fabo(range-1,n1,n2,n3);
	
}

int main(){
	int num;
	cout<<"enter a range till you want fabonacci series:";
	cin>>num;
	
	int n1=0;
	int n2=1;
	int n3;
	fabo(num,n1,n2,n3);
	

}