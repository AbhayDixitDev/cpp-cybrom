#include<iostream>
using namespace std;
int main()
{
 int a=12,b=10,c=90; //bitwise operator
 int r=a&b;
 int s=a|b;
 int t=a^b;
 int w=~a;
 int u=a>>1;   //1100>>1 =  0 will be discard and 110 will make 6 output 6   right shift
 int v=a<<2;   //1100<<2 =  00 will be added in last and it will become 110000 will make  output 48  left shift
cout<<"bitwise and ="<<r<<endl; //8
cout<<"bitwise or ="<<s<<endl; //14
cout<<"bitwise xor ="<<t<<endl; //6
cout<<"bitwise compliment ="<<w<<endl; //-13
cout<<"bitwise right shift ="<<u<<endl; //6
cout<<"bitwise left shift ="<<v<<endl; //48
}
