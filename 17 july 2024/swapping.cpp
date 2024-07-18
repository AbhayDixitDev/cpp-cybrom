//swapping using function and pointer
#include<iostream>
using namespace std;

//call by reference
//void swap(int *num1,int *num2){
//	cout<<"before swapping"<<*num1<<" "<<*num2<<endl;
//	int temp=*num1;
//	*num1=*num2;
//	*num2=temp;
//	cout<<"after swapping"<<*num1<<" "<<*num2<<endl;
//}
//int main()
//{
//	int num1,num2;
//	cout<<"enter two numbers:";
//	cin>>num1>>num2;
//	cout<<"before calling"<<num1<<" "<<num2<<endl;
//	swap(&num1,&num2);
//	cout<<"after calling"<<num1<<" "<<num2<<endl;
//
//}

//call by value
void swap(int num1,int num2){
	cout<<"before swapping"<<num1<<" "<<num2<<endl;
	int temp=num1;
	num1=num2;
	num2=temp;
	cout<<"after swapping"<<num1<<" "<<num2<<endl;
}
int main()
{
	int num1,num2;
	cout<<"enter two numbers:";
	cin>>num1>>num2;
	cout<<"before calling"<<num1<<" "<<num2<<endl;
	swap(num1,num2);
	cout<<"after calling"<<num1<<" "<<num2<<endl;

}
