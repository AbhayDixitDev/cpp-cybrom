//Write a program to calculate area of different Shapes 
//based on users choice S, C or R (like s for square, c for circle, and r for rectangle).
#include<iostream>
using namespace std;
int main()
{
   char area;
   double areaof;
   cout<<"enter S (for square area), C(for circle area) or R(for rectangle area) for area of respective :";
   cin>>area;
   switch(area){
   	case 's':
   		{
   			double side;
   	cout<<"enter side of square in feet:";
   	cin>>side;
   	areaof=side*side;
   	cout<<"area of square is :"<<areaof<<" Square Feet";
		   }
		   break;
	case 'c':
   		{
   			double radius;
   	cout<<"enter radius of circle:";
   	cin>>radius;
   	areaof=3.14*radius*radius;
   	cout<<"area of square is :"<<areaof;
		   }
		   break;
	case 'r':
   		{
   			double len,breadth;
   	cout<<"enter length and breadth in feet:";
   	cin>>len>>breadth;
   	areaof=len*breadth;
   	cout<<"area of square is :"<<areaof<<" square feet";
		   }
		   break;
    default:
    	cout<<"invalid input";
    	break;
   }
   
  

}


