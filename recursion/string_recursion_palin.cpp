#include<iostream>
using namespace std;
bool palin(string s,int low,int high)
{
	if(low>high)
		return true; //first base
	if(s[low]!=s[high])
	return false; //second base
	if(s[low]==s[high])
	return palin(s,low+1,high-1);//recursion
}

int main(){
	string s;
	cout<<"enter a string:";
	cin>>s;
	
	int ps=palin(s,0,s.length()-1); //function calling
	if(ps==0){
		cout<<s<<" is not a palindrome:";
	}
	else
	cout<<s<<" is a palindrome:";
	
}
