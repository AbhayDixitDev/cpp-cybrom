#include <iostream>
using namespace std;

bool palindrome(string s, int lower, int upper){
	if(lower>upper)
	return true;
	
	else if(s[lower]!=s[upper])
	return false;
	else
	return palindrome(s,lower+1,upper-1);
	
}

int main(){
	cout<< palindrome("notin",0,4);
}
