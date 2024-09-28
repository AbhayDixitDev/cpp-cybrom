//Q.5) Write a C++ program that includes a function "isPalindrome" which takes a string as input and returns `true` if the string is a palindrome
// and `false` otherwise.

#include <iostream>
using namespace std;

bool isPalindrome(string str){
	bool ispalin=false;
	for(int i=0,j=str.length()-1;i<=j;i++,j--){
		if(str[i]==str[j]){
			ispalin=true;
		}
		else
		{
			ispalin=false;
			break;
		}
	}
	return ispalin;	
}

int main(){
	string str="";
	cout<<"Enter a string to find out that given string is palindrome or not:";
	cin>>str;
	bool result=isPalindrome(str);
	if(result){
		cout<<"String is palindrome";
	}
	else
	cout<<"string is not palindrome";
}
