//MCQ_TEST:
#include<iostream>
using namespace std;
int main()
{
	if(sizeof('\0'))
		cout<<"inside if block";
	else
		cout<<"inside else block";
	return 0;
}
