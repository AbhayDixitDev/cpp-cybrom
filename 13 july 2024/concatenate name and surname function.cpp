//1>WAP to concatenate name and surname of a user having one space
//between them
//parameter -->name,surname
//return --->no return 

#include<iostream>
using namespace std;
void concat(string name,string surname){
	cout<<name+" "+surname;
}
int main(){
	string name,surname;
	cout<<"Enter Name and Surname:";
	cin>>name>>surname;
	concat(name,surname);
}
