//pointer call by value call by reference
//write a program to swap the value of two variable with each other using function (call by value/call by reference)
#include<iostream>
using namespace std;

//call by value   copy the value (changes not reflect in main function var number)

//void increment_10(int num){
//	num=num+10;
//	cout<<"Number :"<<num<<endl;
//}
//int main()
//{
//	int number;
//	cout<<"enter a number:";
//	cin>>number;
//	increment_10(number);
//	cout<<"after calling number:"<<number;
//
//}

//call by reference   pass the reference instead of value (changes reflect in main function)
void increment_10(int *num){
	*num=*num+10;
	cout<<"Number :"<<*num<<endl;
}
int main()
{
	int number;
	cout<<"enter a number:";
	cin>>number;
	increment_10(&number);
	cout<<"after calling number:"<<number;

}
