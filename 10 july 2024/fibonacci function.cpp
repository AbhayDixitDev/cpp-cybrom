//Wap display fabonnaci series
#include<iostream>
using namespace std;
void fibo(int range){
	int n1=0,n2=1,n3;
cout<<n1<<" "<<n2<<" ";
while(1){
	n3=n1+n2;
	if(n3<=range)
	cout<<n3<<" ";
	else
	break;
	n1=n2;
	n2=n3;
}
}

int main()
{
  fibo(100000);
}




