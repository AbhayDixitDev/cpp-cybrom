//2)WAP to count number of digits, and alphabet in a string s ,
//given by user.
//
//if s="apple 123"
//alphabet: 5
//digits: 3

#include<iostream>
using namespace std;
int main()
{
   string s;
   cout<<"Enter a Sentense or string:";
   getline(cin,s);
   
   int alpha=0,digit=0;
   for(int i=0;i<s.size();i++){
   	if(isalpha(s[i])){
   		alpha++;
	   }
	   if(isdigit(s[i])){
	   	digit++;
	   }
   }
   cout<<"Alphabets in String are :"<<alpha;
   cout<<endl<<"Digits in String are:"<<digit;
}



