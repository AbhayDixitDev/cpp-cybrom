#include<iostream>
using namespace std;
int main()
{
 int num;
 cout<<"enter a number:";
 cin>>num;
 switch(num>0){
 	case 0: switch(num<0){
	  case 0: cout<<"zero"; break;
	  case 1: cout<<"negative"; break;
	 }
	 break;
	 case 1: cout<<"positive";
	 break;
 }
}

