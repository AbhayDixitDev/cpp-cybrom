//Write a program to find the odd or even as well as create a table of any number using switch
//case.

#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"enter a number number:";
	cin>>n;
	char ch;
	cout<<"Type 'c' for check even or odd or type 't' for table print:  ";
	cin>>ch;
	switch(ch){
		case 'c':{
			if(n%2==0){
				cout<<"Number is even";
			}
			else{
				cout<<"number is odd";
			}
			break;
		}
		case 't':{
			for(int i=1;i<=10;i++){
				cout<<n<<" * "<<i<<" is:"<<n*i<<endl;
			}
			break;
		}
		default:{
			cout<<"invalid choice case:";
			break;
		}
	}

}

