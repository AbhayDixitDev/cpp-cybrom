//2-->WAP to print whether a number is prime number or not.
//
//parameter -->no
//return --->return string ("yes" or "no")

#include<iostream>
using namespace std;
string prime(){
	int num;
	cout<<"enter a number:";
	cin>>num;
	bool prime=true;
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			prime=false;
			break;
		}
	}
	if(prime==true){
		return "Yes";
	}
	else{
		return "No";
	}
}
int main(){
	cout<<prime();
	
}
