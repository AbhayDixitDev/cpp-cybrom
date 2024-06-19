//Q.5 Write a program to find the cube and factorial of any number using switch case ?
#include<iostream>
using namespace std;
int main()
{  int n,f=1; 
   cout<<"Enter a Number:";
   cin>>n;
   char ch;
   cout<<"Enter 'c' for find cube of Number or 'f' for factorial of the number:";
   cin>>ch;
   
   switch(ch)
   {
   	case 'c':
   		{
   			cout<<"Cube of "<<n<<" is: "<<n*n*n;
   			break;
		   }
    case 'f':
    	{
    		for(int i=n;i>=1;i--){
    			f=f*i;
			}
			cout<<"Factorial of "<<n<<" is:"<<f;
			break;
		}
    default:{
    	cout<<"invalid input";
		break;
	}
   }
}
   

