#include<iostream>
using namespace std;

int main(){
int size;
		cout<<"Enter array size:";
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++){
			cout<<"Enter number for array index:"<<i<<"-->";
			cin>>arr[i];
		}
		int num;
	    cout<<"enter a number to print array index value:";
      	cin>>num;
      	
	try{
	 	if(num<0 || num>=size){
			throw num;
		}
		cout<<"array index value:"<<arr[num];
	}
	catch(int num){
		cout<<"you entered number is invalid to array:"<<num<<endl;
		cout<<"Try number within range of array!";
	}
	
	
	
}
