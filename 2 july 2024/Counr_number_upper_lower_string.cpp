//1)WAP to count number of uppercase letters, and lowercase letter 
//in a string s ,given by user.
//
//if s="apple IS"
//upper: 2
//lower: 5

#include<iostream>
using namespace std;
int main()
{
   string s;
   cout<<"Enter a Sentense or string:";
   getline(cin,s);
   
   int upp=0,low=0;
   for(int i=0;i<s.size();i++){
   	if(isupper(s[i])){
   		upp++;
	   }
	   if(islower(s[i])){
	   	low++;
	   }
   }
   cout<<"Upper Case letters in String are :"<<upp;
   cout<<endl<<"Lowercase letters in string are:"<<low;
}


