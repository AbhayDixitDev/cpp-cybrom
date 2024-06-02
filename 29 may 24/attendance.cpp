//A student will not be allowed to sit in exam if his/her attendence is less than 75%.
//Take following input from user
//Number of classes held
//Number of classes attended.
//And print
//percentage of class attended
//Is student is allowed to sit in exam or not.

#include<iostream>
using namespace std;
int main()
{
 float allclass,attendclass;
 float percentage;
 cout<<"enter number of held classes :";
 cin>>allclass;
 cout<<"enter number of attended classes :";
 cin>>attendclass;
 percentage=(attendclass/allclass)*100;
 cout<<"attendance percentage :"<<percentage<<endl;
 if(percentage>=75){
 	cout<<"you are eligible for sitting in exam";
 }
 else{
 	cout<<"you are not eligible for sitting in exam";
 }
 
 
 
}

