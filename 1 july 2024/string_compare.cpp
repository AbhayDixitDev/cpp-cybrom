#include<iostream>
using namespace std;
int main()
{
	string str1= "Abc",str2="ABC",str3="",str4="Banana",str5="B";

	cout<<str2.compare(str3)<<endl;
	cout<<str3.compare(str2)<<endl;
    	cout<<str1.compare(str2)<<endl;
    	cout<<str2.compare(str1)<<endl;
    		cout<<str4.compare(str5)<<endl;
    			cout<<str5.compare(str4)<<endl;

}

