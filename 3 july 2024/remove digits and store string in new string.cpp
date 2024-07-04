//5)WAP to create a new string s2,with the help of old string s1.
//such that all digits are removed from it.
//
//s1="abcdef1234pqrs"
//s2="abcdefpqrs"

#include<iostream>
using namespace std;
int main()
{
   string s1="abcdef1234pqrs",s2;
   for(int i=0;i<s1.size();i++){
   	if(!isdigit(s1[i])){
   		s2.push_back(s1[i]);
	   }
   }
   cout<<s1<<endl;
   cout<<s2<<endl;
}


