//write a program to Check Whether a Given Number is Prime or Not
#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool check=true;
  cout << "Enter a positive integer: ";
  cin >> n;
  
  if (n == 0 || n == 1) {
  	 check=false;
      cout << n << " is not a prime number";
  }

  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) { /* if we divide number with 2, 3 and N/2 and result 
	come other than 0 than it is a prime number otherwise it is a non prime number*/
    	check=false;
 
    }
  
  }
  if(check==true){
  	cout << n << " is a prime number";	
  }
  else{
  	cout << n << " is not a prime number";
  }

  return 0;
}

