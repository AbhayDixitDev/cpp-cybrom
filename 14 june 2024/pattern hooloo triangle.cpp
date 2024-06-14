//    *
//   * *
//  *   *
// *     *
//* * * * *

#include<iostream>
using namespace std;
int main()
{ 
//cout<<"enter a number for pyramid";
//cin>>n;
	int star=1; //star printing value
 for(int i=5;i>=1;i--){
 	for(int j=i-1;j>=1;j--){ //space
 		cout<<" ";
	 }
 	for(int k=1;k<=star;k++){ //star
 	
 	if(k==1 || k==star || i==1&& k%2!=0 )
 	
 		cout<<"*";
 		else{
 			cout<<" ";
		 }
	 }
	 star=star+2; // star increment
	 cout<<endl;
 }
}

