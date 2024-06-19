//Q.2 Write a program to input basic salary of an employee and calculate its 
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%
#include<iostream>
using namespace std;
int main()
{
   int Basic;
   double HRA,DA,Gross;
   cout<<"enter basic salary:";
   cin>>Basic;
   
   if(Basic<=10000 && Basic>1){
   	HRA=Basic*20/100;
   	DA=Basic*80/100;
   	Gross=Basic+HRA+DA;
   	cout<<"HRA is:"<<HRA<<endl;
   	cout<<"DA is:"<<DA<<endl;
   	cout<<"Gross Salary is:"<<Gross<<endl;
   }
   else  if(Basic>10000 && Basic<=20000){
   	HRA=Basic*25/100;
   	DA=Basic*90/100;
   	Gross=Basic+HRA+DA;
   	cout<<"HRA is:"<<HRA<<endl;
   	cout<<"DA is:"<<DA<<endl;
   	cout<<"Gross Salary is:"<<Gross<<endl;
   }
   else  if(Basic>20000){
   	HRA=Basic*30/100;
   	DA=Basic*95/100;
   	Gross=Basic+HRA+DA;
   	cout<<"HRA is:"<<HRA<<endl;
   	cout<<"DA is:"<<DA<<endl;
   	cout<<"Gross Salary is:"<<Gross<<endl;
   }
   else{
   	cout<<"Invalid input";
   }
}

