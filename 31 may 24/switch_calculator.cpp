// Write a program to perform basic calculator functyions .
#include<iostream>
using namespace std;
int main()
{
int a,b;
char ch;
cout<<"enter two numbes for calculation :";
cin>>a>>b;
cout<<"enter '+' for addition, '-' for subtraction, '*' for multiply, '/' for division, '%' for modulus : ";
cin>>ch;
switch(ch){
	case '+':cout<<"addition result :"<< a+b<<endl;
	        	break;
    case '-':cout<<"subtract result :"<< a-b<<endl;
	        	break;
	case '*':cout<<"multiply result :"<< a*b<<endl;
	        	break;
	case '/':cout<<"division result :"<< a/b<<endl;
	        	break;
	case '%':cout<<"modulus result :"<< a%b<<endl;
	        	break;
	default: cout<<"invalid choice"<<endl;
	        	break;
}
}

