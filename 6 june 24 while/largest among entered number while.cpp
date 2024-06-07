//Write a program to enter the numbers till the user wants and at the
//end the program
//should display the largest  entered.


#include<iostream>
using namespace std;
int main()
{
	int n1,lar=0;
	char choice='y';
	while(choice=='y'){
		cout<<"enter a number :";
		cin>>n1;
		if(lar<n1){
			lar=n1;
		}
		cout<<"enter y to continue entering number or enter any other character to exit:";
		cin>>choice;
	}
	cout<<"largest entered number:"<<lar;


}


