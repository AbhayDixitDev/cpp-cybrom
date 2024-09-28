// Write a C++ program to find minimum and second minimum between three numbers
#include<iostream>
using namespace std;
int main()
{
	
	int a,b,c;
	cout<<"enter three numbers";
	cin>>a>>b>>c;
	if(a<=b && a<=c){
		cout<<a << " is minimum among "<< b<< "and "<<c<<endl;
		if(b<c){
			cout<<b<<" is second minimum among "<< a <<"and "<<c;
		} 
		else{
				cout<<c<<" is second minimum among "<< a <<"and "<<b;
		}
	}
	else 	if(b<=a && b<=c){
		cout<<b << " is minimum among "<< a<< "and "<<c<<endl;
		if(a<c){
			cout<<a<<" is second minimum among "<< b <<"and "<<c;
		} 
		else{
				cout<<c<<" is second minimum among "<< a <<"and "<<c;
		}
	}
	else 	if(c<=a && c<=b){
		cout<<c << " is minimum among "<< a<< "and "<<b<<endl;
		if(a<b){
			cout<<a<<" is second minimum among "<< b <<"and "<<c;
		} 
		else{
				cout<<b<<" is second minimum among "<< a <<"and "<<c;
		}
	}
	else{
		cout<<"all numbers are equal";
	}

}


