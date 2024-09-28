//Write a program to print all natural numbers in reverse from n
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a range number from where you want to print numbers";
	cin>>n;
	
	int i=n;
	while(i>=1){
		cout<<i<<endl;
		i--;
	}

}
