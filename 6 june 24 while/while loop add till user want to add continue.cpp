//Write a loop that asks the user to enter two numbers. The numbers 
//should be added and the sum displayed. The loop should ask the user whether 
//he or she wishes to perform the operation again. If so, the loop should repeat;
// otherwise it should terminate.

#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	
	bool cont=1;
	while (cont==1){
		cout<<"enter two numbers :";
	cin>>n1>>n2;
	cout<<"addition ="<<n1+n2<<endl;
		cout<<"do you want to continue,if yes enter 1 or no enter 0 :";
	cin>>cont;
	
	}

	

}

