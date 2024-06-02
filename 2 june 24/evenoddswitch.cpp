// Write a program to check whether a number is even or odd using switch-case.
#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"enter a number to check even or odd :";
cin>>num;
switch(num%2==0){
	case 1:{
		cout<<num<<" is a even number";
	}
		break;
	default:
		cout<<num<<" is a odd number";
		break;
}

}

