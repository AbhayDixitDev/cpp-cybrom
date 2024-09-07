#include <iostream>
using namespace std;

void add(int num1,int num2=0,int num3=0){
	cout<<num1+num2+num3<<endl;
}

int main(){
	add(24,25);
	add(50,75,90);
}