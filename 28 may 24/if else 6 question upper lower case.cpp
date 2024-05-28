//Write a program to calculate whether character is in lowercase or uppercase.
#include<iostream>
using namespace std;
int main()
{
  char letter;
  cout<<"enter a character : ";
  cin>>letter;
  if(letter>=65 && letter<=90){
  	cout<<"uppercase";
  }
  else  if(letter>=97 && letter<=122){
  	cout<<"lowercase";
  } 
  else {
  	cout<<"enter valid input";
  }
}

