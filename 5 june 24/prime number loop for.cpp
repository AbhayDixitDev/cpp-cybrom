//prime number
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number to check prime or not prime :";
	cin>>n;
	bool is_prime=true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			is_prime=false;
		}
	}
	if(is_prime==true)
	cout<<"number is a prime ";
	else
	 cout<<"number is not a prime";
}
