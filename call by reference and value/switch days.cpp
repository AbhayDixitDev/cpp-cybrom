#include<iostream>
using namespace std;
int main(){
	cout << "Press 1 for January" << "\n";
	cout << "Press 2 for February" << "\n";
	cout << "Press 3 for March" << "\n";
	cout << "Press 4 for April" << "\n";
	cout << "Press 5 for May" << "\n";
	cout << "Press 6 for June" << "\n";
	cout << "Press 7 for July" << "\n";
	cout << "Press 8 for August" << "\n";
	cout << "Press 9 for September" << "\n";
	cout << "Press 10 for October" << "\n";
	cout << "Press 11 for November" << "\n";
	cout << "Press 12 for December" << "\n";
	cout << "Press 0 to Exit" << "\n";
	int month = 0;
	cin >> month;
	
	switch(month){
		case 1:
			cout << " 31 days" << "\n";
			break;
	    case 2:
			cout << " 28 or 29 based on leap year" << "\n";
			break;
		case 3:
			cout << " 31 days" << "\n";
			break;
		case 4:
			cout << " 30 days" << "\n";
			break;
		case 5:
			cout << " 31 days" << "\n";
			break;
		case 6:
			cout << " 30 days" << "\n";
			break;
		case 7:
			cout << " 31 days" << "\n";
			break;
		case 8:
			cout << " 31 days" << "\n";
			break;
		case 9:
			cout << " 30 days" << "\n";
			break;
		case 10:
			cout << " 31 days" << "\n";
			break;
			
		case 11:
			cout << " 30 days" << "\n";
			break;
			
		case 12:
			cout << " 31 days" << "\n";
			break;
			
		default:
		    cout<<" Invalid Input" << "\n";		
	}
	
}
