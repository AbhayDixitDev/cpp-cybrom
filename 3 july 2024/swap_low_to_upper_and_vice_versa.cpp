//3)WAP to swap the upper character to lower and vice-versa
//
//if s="Apple"
//output="aPPLE"

#include<iostream>
using namespace std;
int main()
{
   string s;
   cout<<"Enter a Sentense or string:";
   getline(cin,s);
   
   for(int i=0;i<s.size();i++){
   	   if(islower(s[i])){
	   	s[i]=toupper(s[i]);
	   }
	   else if(isupper(s[i])){
   		s[i]=tolower(s[i]);
	   }
	   
   }
   cout<<s;
}
