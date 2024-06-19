//Write a program to check whether a character is uppercase or lowercase alphabet.
#include<iostream>
using namespace std;
int main()
{
   char ch;
   cout<<"enter a charater:";
   cin>>ch;
   
   if(ch>='A' && ch<='Z'){
   	cout<<"Uppercase";
   	
   }
   else if(ch>='a' && ch<='z')
   cout<<"lowercase:";
   
   else
   cout<<"invalid input:";
}

