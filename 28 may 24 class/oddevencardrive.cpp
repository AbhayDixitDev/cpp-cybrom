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

cout<<"enter day number between 1-7 :";
cin>>day; // day value 1 to 7
cout<<"Do you have driving licence, enter yes or no:";
cin>>drivinglicence; // yes or no
cout<<"Do you have puc of car , enter yes or no:";
cin>>puc; // yes or no
cout<<"enter last four digit of car number example `1234`:";
cin>>carnumber; //last four digit of car number
if(day>=1 && day<=7){ // if day number is between 1 to 7 then condition true
	if(day%2==0){ // day check even or not
	cout<<"today is even day"<<endl;
	if(drivinglicence=="yes"){// if dl == yes then condition true
		if(puc=="yes"){ // if puc == yes condition true
			if(carnumber%2==0){ // car last four digit even then conditio true
				cout<<"you can drive car";
			}
		}
			else if(puc=="no"){ // puc no drive no
		cout<<"you cant drive, you donthave puc";
	}
	else{ // invalid input
		cout<<"invalid input of puc";
	}
	}
	else if(drivinglicence=="no" ){ // dl no drive no
		cout<<"you cant drive, you dont have driving license";
	}	
	else{ // invalid input
		cout<<"invalid input of driving licence availablilty";
	}
	
}

if(day%2!=0){ // check day odd
   cout<<"today is odd day"<<endl;
	if(drivinglicence=="yes"){ // check dl yes
		if(puc=="yes"){ // checl puc yes
			if(carnumber%2!=0){ // check car number odd
				cout<<"you can drive car";
			}
		}
			else if(puc=="no"){ // no puc no drive
		cout<<"you cant drive, you donthave puc";
	}
		else{ // invalid input puc
		cout<<"invalid input of puc";
	}
	}
	else if(drivinglicence=="no"){ // dl no drive no
		cout<<"you cant drive, you dont have driving license";
	}	
	else{ // invalid input dl
		cout<<"invalid input of driving licence availablilty";
	}
}
}
else{ // day is greater than 7 or less than 1
	cout<<"invalid input of day, please enter value between 1-7";
	}

}

