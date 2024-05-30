#include<iostream>
using namespace std;
int main()
{
 double year,salary;
 string name;
 cout<<"enter your name, year of service and salary :";
 cin>>name>>year>>salary;
 cout<<"hello "<<name<<endl;
 if(year>=5){
 	double bonus= salary/20;
 	cout<<"u got bonus of rs "<<bonus<<endl;
 	cout<<"net salary :"<<bonus + salary;
 	
 }
 else{
 	cout<<"u are not eligible for any bonus"<<endl;
 	cout<<"net salary :"<<salary;
 }
}

