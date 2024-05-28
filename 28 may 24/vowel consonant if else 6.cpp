//Write a program to calculate whether a character is vowel or consonant.
#include<iostream>
using namespace std;
int main()
{
	char letter;
	cout<<"enter an character : ";
	cin>>letter;
	if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U'){
		cout<<"vowels";
	}
	else{
		cout<<"consonant";
	}

}

