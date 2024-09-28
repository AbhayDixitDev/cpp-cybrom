//Write a program that accepts marks (out of 100) of five subjects from user and calculate the sum then calculate percentage? Display message according to following condition:
//percentage >=60 Grade A
//percentage >=50 Grade B
//percentage >=40 Grade C
//percentage  <40 Grade D

#include<iostream>
using namespace std;
int main()
{
 int s1,s2,s3,s4,s5,total;
 cout<<"enter marks for all 5 subjects between 0 to 100:"<<endl;
 cout<<"Subject1 :";
 cin>>s1;
 cout<<"Subject2 :";
 cin>>s2;
 cout<<"Subject3 :";
 cin>>s3;
 cout<<"Subject4 :";
 cin>>s4;
 cout<<"Subject5 :";
 cin>>s5;
 
 if(s1>=0 && s1<=100){
 if(s2>=0 && s2<=100){
 if(s3>=0 && s3<=100){
 if(s4>=0 && s4<=100){
 if(s5>=0 && s5<=100){
 	total=(s1+s2+s3+s4+s5)/5.0;
 	
 	if(total>=60){
 		cout<<"grade A"<<endl;
	 }
	else if(total>=50){
 		cout<<"grade B"<<endl;
	 }
	else if(total>=40){
 		cout<<"grade C"<<endl;
	 }
	else if(total>=33){
 		cout<<"grade D"<<endl;
	 }
	else{
		cout<<"fail"<<endl;
	}
	cout<<"Your Percentage is :"<<total;
 	
 }
 else{
	cout<<"invalid marks of subject 1";
 } 
 	
 }
 else{
	cout<<"invalid marks of subject 1";
 } 
 }
 else{
	cout<<"invalid marks of subject 1";
 } 	
 }
 else{
	cout<<"invalid marks of subject 2";
 } 	
 }
 else{
	cout<<"invalid marks of subject 1";
 }
 }

