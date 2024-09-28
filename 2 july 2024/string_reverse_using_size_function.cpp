//wap to display/create a string in reversed order
//"My name is abhay"
//"yahba si eman yM"
#include<iostream>
using namespace std;
int main()
{
	string str,rev;
	cout<<"Enter a string:";
//	cin>>a;  //   we will use getline instead of cin because when we use cin for entering 
             //input it drop all strings after space
    getline(cin,str);
    
	int n=str.size(); //to know string size


	for(int i=n-1;i>=0;i--){
		rev.push_back(str[i]);
	}
	if(str==rev){
		cout<<"its palindrome:"<<endl;
	}
	else{
		cout<<"its not palindrome:"<<endl;
	}
	cout<<rev;


}




