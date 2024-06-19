//Q.1 Write a program to input electricity unit charges and calculate total electricity bill according to
//the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill


#include<iostream>
using namespace std;
int main()
{
	
	double unit,temp,bill=0;
	cout<<"enter electricity units:";
	cin>>unit;
	if(unit>=1){
	 if(unit<50){
	 	bill=bill+unit*0.50;
	 }
	 else if(unit>=50){ //0.50
	 	unit=unit-50;
	 	bill=bill+50*0.50;
	 	if(unit<100){     //0.75
	 	bill=bill+unit*0.75;
	 	}
	 	else if(unit>=100){ //0.75
	 	unit=unit-100;
	 	bill=bill+100*0.75;
	 	if(unit<100){  //1.20
	 	bill=bill+unit*1.20;
	 	}
	 	
	 	else if(unit>=100){ //1.20
	 	unit=unit-100;
	 	bill=bill+100*1.20;
	 	if(unit>=1){  //1.50
	 	bill=bill+unit*1.50;
	 	}
	 	
	 }
	 }
	 }
	}
	bill=bill+bill*20/100;//20 % surcharge added
	cout<<bill;

}

