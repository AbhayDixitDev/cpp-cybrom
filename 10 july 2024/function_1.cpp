//WAP to concatenate the name and surname given by a user using function
//parameter -> 2 strings
//return -> strings
#include<iostream>
using namespace std;

string user(string,string);

int main()
{
	string name,surname;
	cout<<"enter name and surname:";
	cin>>name>>surname;
	string result=user(name,surname); //function calling
	cout<<"My full name is "<<result;

}

string user(string name,string surname){
		return name+" "+surname;
}

