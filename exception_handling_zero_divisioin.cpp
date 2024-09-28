#include <iostream>
using namespace std;

int main(){
	double n1,n2;
	try{
		cout<<"enter two numbers";
	cin>>n1>>n2;
	if(n2==0){
		throw n2;
	}
	
	cout<<n1/n2;
	}
	catch(double n2){
		cout<<"you entered dimoninator as:"<<n2<<endl;
		cout<<"dinominator can't be zero";
	}
}
