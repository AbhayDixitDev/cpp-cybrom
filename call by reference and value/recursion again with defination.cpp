//recursion : whenever a function calls itself then the concept known as recursion
//it is classified as direct and indirect recursion
//direct recursion

//f1() calls f1();
//indirect recursion: 

//f1() calls f2(), f2() calls f3(), and f3() calls f1()

//if we can not mention base condition in recursion then there is problem arise known as stack over flow.
//generally we analyse recursion using tracing tree

//direct recursion types:
//1 head and   linear recursion
//2 tail recursion:    linear recursion
//3 tree recursion:      merge and quick sort
//4 nested recursion:

#include <iostream>
using namespace std;

void f1(int n){
	if(n>5)
	 return;
	f1(n+1);// head output 5,4,3,2,1
	cout<<"this is function f1(), current n value is:"<<n<<endl; 
}
void f2(int n){
	if(n>5)
	 return;
	cout<<"this is function f1(), current n value is:"<<n<<endl; 
	f2(n+1);// tail recursion output 1,2,3,4,5
}

int main(){
	f1(1);
	cout<<"\n";
	f2(1);
}

