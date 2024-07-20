//Write a recursive function to calculate the sum of the first n natural numbers.
#include <iostream>
using namespace std;
int sum(int range,int n){
	int sum1=0;
	if(n>range){
		return 0;
	}
	else{		
	return n+sum(range,n+1);	
}
}

int main() {
  int range,n=1;
  cout<<"Enter a number till where you want the sum of numbers:";
  cin>>range;
  cout<<sum(range,n);
}
