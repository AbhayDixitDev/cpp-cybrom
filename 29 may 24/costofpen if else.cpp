// Write a  program to input a cost of a pen and calculate 70 pens cost with some discount.
// if total pen cost greater than 1000 then we calculate 20% discount otherwise 10%.
#include<iostream>
using namespace std;
int main()
{
	int costofpen;
	cout<<"enter cost of a pen";
	cin>>costofpen;
    double cost=70*costofpen;
    if(cost>1000){
    	double payamount=cost-cost/5;
    	cout<<"after discount cost:"<<payamount;
	}
	else{
		double payamount=cost-cost/10;
    	cout<<"after discount cost:"<<payamount;
	}
    
}

