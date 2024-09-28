#include<iostream>
using namespace std;
int main(){
	string str= "apple";
	str.push_back(' ');
	str.push_back('s');
	str.push_back(' ');
	//str.append(" is good "); //multiple --> string
	str=str+" are good ";
	cout<<str;
}
