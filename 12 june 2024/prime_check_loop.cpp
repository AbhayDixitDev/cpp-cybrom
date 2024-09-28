//WAP to print whether a number is prime number or not
//WAP to print all prime number in given range.
#include<iostream>
using namespace std;
int main()
{

  
  for(int n=1;n<=1000;n++){
  	 bool is_prime=true;
  	 for(int i=2;i<=n/2;i++){
   	if(n%i==0){
   		is_prime=false;
   		break;
	   }	   
       }
   if(is_prime==true){
   	cout<<n<<endl;
   }
  }
//   if(is_prime==false){
//   	cout<<"number is not a prime number";
//   }
//   else{
//   cout<<"number is a prime number";
//}
}

