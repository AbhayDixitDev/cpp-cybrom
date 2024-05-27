//WAP for Gross Salary and Net Salary
#include<iostream>
using namespace std;
int main()
{
	int bs;
	double ta; //ta 10%
	double pf; // pf 7.8%
	int da=600; // DA 500 GIVEN
	cout<<"enter your basic salary="<<endl;
	cin>>bs; // basic salary input 10000
	cout<<"Basic Salary ="<<bs<<endl;	
	ta=bs*10/100; //ta  = 1000
	cout<<"TA ="<<ta<<endl;
	pf=bs*7.8/100; // pf = 780
	cout<<"PF ="<<pf<<endl;	
	cout<<"DA ="<<da<<endl;
	
	double gs = bs+da+ta; // gross salary = 11500
	cout<<"gross salary (gs = bs+da+ta)="<<gs<<endl;
	double ns = gs-pf; // net salary = 10720
	cout<<"net salary (ns = gs-pf)="<<ns<<endl;
	
}
