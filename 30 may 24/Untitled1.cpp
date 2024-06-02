#include<iostream>
using namespace std;
int main()
{
//	Wap to check whether a person eligible to drive a car in ncr on Monday (day 1)
//1) check driving licence first
//2)check car number 
//3)check puc
int day;
string drivinglicence;
string puc;
int carnumber;

cout<<"enter date of month";
cin>>day;
cout<<"Do you have drivinglicence, enter yes or no";
cin>>drivinglicence;
cout<<"Do you have puc of car , enter yes or no";
cin>>puc;
cout<<"enter last four digit of car number example 1234";
cin>>carnumber;
if(day%2==0){
	cout<<"day is even"<<endl;
	if(drivinglicence=="yes"){
		if(puc=="yes"){
			if(carnumber%2==0){
				cout<<"you can drive car";
			}
		}
			else if(puc=="no"){
		cout<<"you cant drive, you donthave puc";
	}
	else{
		cout<<"invalid input of puc";
	}
	}
	else if(drivinglicence=="no" ){
		cout<<"you cant drive, you dont have driving license";
	}	
	else{
		cout<<"invalid input of driving licence availablilty";
	}
	
}
if(day%2!=0){
   cout<<"day is odd"<<endl;
	if(drivinglicence=="yes"){
		if(puc=="yes"){
			if(carnumber%2!=0){
				cout<<"you can drive car";
			}
		}
			else if(puc=="no"){
		cout<<"you cant drive, you donthave puc";
	}
		else{
		cout<<"invalid input of puc";
	}
	}
	else if(drivinglicence=="no"){
		cout<<"you cant drive, you dont have driving license";
	}	
	else{
		cout<<"invalid input of driving licence availablilty";
	}
}

}

