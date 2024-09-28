//Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot
#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"enter temperature in centigrade:";
	cin>>temp;
	if(temp<0){
		cout<<"freezing weather";
	}
	else if(temp>=0 && temp<10){
		cout<<"Very Cold Weather";
	}
	else if(temp>=10 && temp<20){
		cout<<"Cold Weather";
	}
	else if(temp>=20 && temp<30){
		cout<<"Normal Temperature";
	}
	else if(temp>=30 && temp<40){
		cout<<"Hot weather";
	}
	else if(temp>=40 && temp<55){
		cout<<"Very Hot Weather";
	}
	else{
		cout<<"Extreme Hot Weather";
	}

}


