//    *
//   ***
//  *****
// *******
//*********

#include<iostream>
using namespace std;
int main()
{ 
//cout<<"enter a number for pyramid";
//cin>>n;
	int star=1; //star printing value
 for(int i=5;i>=1;i--){
 	for(int p=i-1;p>=1;p--){ //space
 		cout<<" ";
	 }
 	for(int j=1;j<=star;j++){ //star
 		cout<<"* ";
	 }
	 star++; // star increment
	 cout<<endl;
 }
}

