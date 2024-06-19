#include<iostream>
using namespace std;
int main()
{
	char choice;
	int len,bre,side,rad;
	const double pi=3.141;
	do{
		cout<<"\n --------------- menu driven program----area---\n";
		cout<<"R------------------>Rectangle\n";
			cout<<"S------------------>Square\n";
				cout<<"C------------------>Circle\n";
					cout<<"E------------------>Exit\n";
	    cout<<"enter a coice";
	    cin>>choice;
	    switch(choice){
	    	case 'R':cout<<"enter length and breadth:";
	    	              cin>>len>>bre;
	    	              cout<<"area of rect " <<len*bre<<endl;
	    	              break;
	        case 'S':cout<<"enter side:";
	    	              cin>>side;
	    	              cout<<"area of square " <<side*side<<endl;
	    	              break;
	    	case 'C':cout<<"enter radius:";
	    	              cin>>rad;
	    	              cout<<"area of circle " <<pi*rad*rad<<endl;
	    	              break;              
	    	case 'E':cout<<"thank you";
	    	              break;
		}
	}while(choice!='E' || choice !='e');

}

