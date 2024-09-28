//A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
//Ask user for quantity
//Suppose, one unit will cost 100.
Judge and print total cost for user.
#include<iostream>
using namespace std;
int main()
{
	int q;
	cout<<"enter quantity:";
	cin>>q;
	int payamount;
	int price=q*100;
	if (price>=1000)
	{
		payamount=price-price/10;
		cout<<"payable amount is ="<<payamount;
	}
	else
	{
		cout<<"payable amount is ="<<price;
	}

}

