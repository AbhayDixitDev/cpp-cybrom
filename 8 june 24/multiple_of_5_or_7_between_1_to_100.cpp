//print all  numbers which is a multiple of 5 or 7 , between 1 to 100.
//5,7,10,14,15,20,21.............100
#include<iostream>
using namespace std;
int main(){
	int i=1;
	while(i<=100){
		if(i%5==0 or i%7==0)
		cout<<i<<", ";
		i++;
	}
}
