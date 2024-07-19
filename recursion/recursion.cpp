#include<iostream>
using namespace std;
int fact(int n){
	if(n==1 || n==0) 
	return 1;  //base condition(exit point)
	else
	return n*fact(n-1); //recursion
}

int main(){
	cout<<fact(5);
}
