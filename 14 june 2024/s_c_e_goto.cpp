//Q.1) Write a menu driven program to perform some  calculation accordingly.
//firstly take an input from user on the basis of input perform following 
//operation. (infinite loop until user enter 'e')
//
//'s' for square of a number
//'c' for cube of a number
//'e' for exit.

#include<iostream>
using namespace std;
int main()
{
   menu:{
int n;
char choice;
cout<<"enter a number:";
cin>>n;
cout<<"enter 's' for sqaure the number or 'c' for cube the number or 'e' for exit:";
cin>> choice;
if(choice=='s'){
	cout<<"Square of "<< n<< " is:"<< n*n<<endl;
}
if(choice=='c'){
	cout<<"Cube of "<< n<< " is:"<< n*n*n<<endl;
}
if(choice=='e'){
	return 0;
}
}
goto menu;

}


