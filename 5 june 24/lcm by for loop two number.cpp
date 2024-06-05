#include<iostream>
using namespace std;
int main(){
	int n1,n2,max;
	cout<<"enter two number for lcm calculation :";
	cin>>n1>>n2;
	if(n1>n2)
	max=n1;
	else
	max=n2;
	for(int i=max; i>=2 ;i++){
  
    if(i%n1==0 && i%n2==0){

      cout<<"lcm is :"<<i;
      break;
     }
	
   }
}
