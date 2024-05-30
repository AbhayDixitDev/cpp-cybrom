//Write a  program to determine eligibility for admission to a professional course based on the following criteria:
//Marks in Maths >=65
//Marks in Phy >=55
//Marks in Chem>=50
//Total in all three subject >=190
#include<iostream>
using namespace std;
int main()
{
float maths,phy,chem,total;
cout<<"enter marks of maths , physics and chemistry :";
cin>>maths>>phy>>chem;
total = maths+phy+chem;
cout<<"total marks is :"<< total<<endl;
if( maths>=65 && phy>=55 && chem>=50 && total>=190){
	cout<<"You are eligible for professional course";
}
else{
	cout<<"your marks is not enough to complete eligiblity criteria, you are not eligible fror this course";
}


}

