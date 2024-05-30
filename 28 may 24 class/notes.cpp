#include<iostream>
using namespace std;
int main()
{
	int amount;
	cout<<"enter an amount to withdraw :";
	cin>>amount;
	if(amount>=2000){
		int twoth=amount/2000;
		amount=amount%2000;
		cout<<"numbe of 2000 notes :"<<twoth<<endl;
	
	}
	if(amount>=500){
		int fiveh=amount/500;
		amount=amount%500;
		cout<<"number of 500 notes :"<<fiveh<<endl;
	}
	if(amount>=200){
		int twoh=amount/200;
		amount=amount%200;
		cout<<"number of 200 notes :"<<twoh<<endl;
	}
	if(amount>100){
		int oneh=amount/100;
		amount=amount%100;
	    cout<<"number of 100 notes :"<<oneh<<endl;
	}
	if(amount>=50){
		int fifty=amount/50;
		amount=amount%50;
		cout<<"number of 50 notes :"<<fifty<<endl;
	}
	if(amount>=20){
		int twenty=amount/20;
		amount=amount%20;
		cout<<"number of 20 notes :"<<twenty<<endl;
	}
	if(amount>=10){
		int ten=amount/10;
		amount=amount%10;
		cout<<"number of 10 notes :"<<ten<<endl;
	}
	if(amount>=5){
		int five=amount/5;
		amount=amount%5;
		cout<<"number of 5 notes :"<<five<<endl;
	}
		if(amount>=2){
		int two=amount/2;
		amount=amount%2;
		cout<<"number of 2 notes :"<<two<<endl;
	}
		if(amount>=1){
		int one=amount/1;
		amount=amount%1;
		cout<<"number of 1 notes :"<<one<<endl;
	}


}

