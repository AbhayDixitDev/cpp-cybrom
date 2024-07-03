//4)WAP to Capitalize each word of a array names.
//names={"ajay","rahul","ritu","raj"}
//output={"Ajay","Rahul","Ritu","Raj"}

#include<iostream>
using namespace std;
int main()
{
	
	string names[]={"abhay","lokesh","gourav","swati","gagan"};
	int n=sizeof(names)/sizeof(string);
//	cout<<n;
	for(int i=0;i<n;i++){
		string str;
		str.append(names[i]);
//		cout<<str;
			str[0]=str[0]-32;
		
			
		cout<<str<<endl;
	}
	

}

