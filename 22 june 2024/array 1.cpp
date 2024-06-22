#include<iostream>
using namespace std;
int main()
{
   double A[]={23,5,545,45,578,45,38,2};
   int size=sizeof(A)/sizeof(A[0]);  //    64/8=8 
   cout<<size<<endl;
   cout<<A[5]<<endl;
   A[5]=50000;
   cout<<A[5]<<endl;
   int B[]={23,5,545,45,578,45,38,2};
   size=sizeof(B)/sizeof(B[0]);  //    32/4=8 
   cout<<size<<endl;
   cout<<B[2]<<endl;
}

