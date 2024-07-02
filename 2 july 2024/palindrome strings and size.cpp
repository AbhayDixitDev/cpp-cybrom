#include<iostream>
using namespace std;
int main()
{
	
	string str[]={"abcdcba","mom","master","nitin","jalaj"},rev;
	int n=sizeof(str)/sizeof(str[0]);
//	cout<<n;
	for(int i=0;i<n;i++){
		rev="";
		string str1=str[i];
		int n1=str1.size();
		
		for(int j=n1-1;j>=0;j--){
		rev.push_back(str1[j]);
     	}
     	
	    if(str[i]==rev && str[i].size()>3){
		cout<<str[i]<<endl;
	    }
	}
}

