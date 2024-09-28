#include<iostream>
using namespace std;
int main()
{
 // Write a program to take input age of male or Female and check he/she is eligible for marriage or not.
// ask age and gender.
int age;
char gender;
cout<<"enter your age";
cin>>age;
cout<<"enter your gender male  \"m\" or female \"f\"";
cin>>gender;
if(gender == 'm' && age>=21)
{
	cout<<"eligible for marriage";
}
else if(gender == 'f' && age>=18)
{
	cout<<"eligible for marriage";
}
else{
   	cout<<"not eligible for marriage";
}


}

