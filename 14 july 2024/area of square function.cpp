//1>WAP to find the area of square taking all essential input in function
//itself,and return result.(main print)
//
//parameter -->no
//return --->return int

#include<iostream>
using namespace std;
int areaofsqr(){
	int side;
	cout<<"enter side of square for find out area:";
	cin>>side;
	return side*side;
	
}
int main(){
	cout<<"Area of square is:"<<areaofsqr();
	
}

