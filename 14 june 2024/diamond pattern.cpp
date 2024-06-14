//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

#include<iostream>
using namespace std;
int main()
{   
	int star=1; //star printing value
 for(int i=5;i>=1;i--){
 	for(int p=i+1;p>=1;p--){ //space
 		cout<<" ";
	 }
 	for(int j=1;j<=star;j++){ //star
 		cout<<"*";
	 }
	 star=star+2; // star increment
	 cout<<endl;
	 if(i==0){
	 	break;
	 }
 }
// cout<<"new";
 for(int i=1;i<=7;i++){
 	for(int p=1;p<=i;p++){ //space
 		cout<<" ";
	 }
 	for(int j=star;j>=1;j--){ //star
 		cout<<"*";
	 }
	 star=star-2; // star increment
	 cout<<endl;
//	 if(i==0){
//	 	break;
//	 }
 }
}

