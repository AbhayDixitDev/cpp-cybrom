//
// Write a program to A school has following rules for grading system: 
//a. Below 25 - F 
//b. 25 to 45 - E 
//c. 45 to 50 - D 
//d. 50 to 60 - C 
//e. 60 to 80 - B 
//f. Above 80 - A 
//
// Ask user to enter marks and print the corresponding grade.

#include<iostream>
using namespace std;
int main()
{
  int marks;
  cout<<"enter marks";
  cin>>marks;
  if(marks<25)
  {
  	cout<<"Fail";
  }
  else  if(marks>=25&& marks<45)
  {
  	cout<<"Grade E";
  }
   else  if(marks>=45&& marks<50)
  {
  	cout<<"Grade D";
  }
   else  if(marks>=50&& marks<60)
  {
  	cout<<"Grade C";
  }
   else  if(marks>=60&& marks<80)
  {
  	cout<<"Grade B";
  }
   else  if(marks>=80&& marks<100)
  {
  	cout<<"Grade A";
  }
  else{
  	cout<<"Invalid Marks";
  }
}


