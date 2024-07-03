//"apple is a good for health" space find 4
//capital first character

//function
//isupper()  = check upper  example= a give false A gives true
//islower()  = check lower  example= a give true A gives false
//toupper()  = makes upper  example= a to A
//tolower()  = makes lower  example= A to a

#include<iostream>
using namespace std;
int main()
{   
	string str="apple is good for health";
	int count=0;
    str[0]=str[0]-32;
	for(int i=0;i<str.size();i++)
	{
		
		int j,k;
		if(str[i]==' '){
			count++;
		 	str[i+1]=str[i+1]-32;
		}
	
		
		
	}
	cout<<count;
	cout<<endl<<str;

}
