//wap to find greatest number among three numbers using function
//parameter three integer value
//return highest number
#include<iostream>
using namespace std;

int greatest(int number1,int number2,int number3){ //formal parameter
	if(number1>number2 && number1>number3)
	return number1;
	else if(number2>number1 && number2>number3)
	return number2;
	else 
	return number3;
}
int main()
{    
    int a,b,c;
    cout<<"Enter three numbers for finding greatest among three:";
    cin>>a>>b>>c;
	int result=greatest(a,b,c);  //actual parameter
	cout<<"Greatest Number is "<<result;
 
}

