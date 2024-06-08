//Write a program to find the factorial value of any number
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter an number to find its factorial;";
	cin>>n;
	int n1=1;
	int fact=1;
	while(n1<=n){
		fact=fact*n1;
		n1++;
	
	}
	cout<<"factorial of "<<n<<" is"<<fact;
}
