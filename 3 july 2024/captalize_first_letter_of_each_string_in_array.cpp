//4)WAP to Capitalize each word of a array names.
//names={"ajay","rahul","ritu","raj"}
//output={"Ajay","Rahul","Ritu","Raj"}

#include<iostream>
using namespace std;
int main()
{	
	string names[]={"abhay","lokesh","gourav","swati","gagan"};
	int n=sizeof(names)/sizeof(string);
	
	for(int i=0;i<n;i++){
		names[i][0]=toupper(names[i][0]);  //method 1  for capatalize first character of given strings
		cout<<names[i]<<" ";              //method 1		
//		------------------------------------------------------
//		string str;                          //method 2  for capatalize first character of given strings
//		str.append(names[i]);              //method 2
//			str[0]=toupper(str[0]);		     //method 2	
//		cout<<str<<endl;                    //method 2
         
	}
	cout<<endl;

	for(int i=0;i<n;i++){                      //loop for capatalize all characters in a string
		for(int j=0;j<names[i].size();j++){
			names[i][j]=toupper(names[i][j]);
		}
		cout<<names[i]<<" ";		
	}
	
	

}

