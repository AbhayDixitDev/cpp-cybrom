#include<iostream>
using namespace std;
int main()
{
	string str="india",rev;
	for(int i=str.size()-1;i>=0;i--)
	{
		rev.push_back(str[i]);
//		rev=rev+str[i];
	}
	cout<<rev;

}

