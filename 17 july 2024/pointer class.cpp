#include<iostream>
using namespace std;
int main()
{
   int num1,num2;
      cout<<"enter two numbers:";
   cin>>num1>>num2;
   int *p=&num1;
   int *p2=&num2;

   
//   cout<<"Address of num1:"<<p<<endl;
//   int *p1=new int;  //block heap section
//       *p=900;             //new--> address return
                    // address return holds in p1
   
   if(*p>*p2){
   	cout<<*p<<" is greater than "<<*p2;  //dereference
   }
   else{
   	cout<<*p2<<" is greater than "<<*p;
   }
}

