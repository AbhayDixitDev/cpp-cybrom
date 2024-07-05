//find() function in strings
// replace() 
// getline(cin,var_name)
// size()
//erase()
//capacity
#include<iostream>
using namespace std;
int main()
{
  string str="apple is good for health";
  cout<<str<<endl;
  string old,new1;
  cout<<"enter string you want to replace:";
  cin>>old;
  cout<<"enter string with whom you want to replace in string:";
  cin>>new1;
  int size=old.size();
  int index=str.find(old);
  str.replace(index,size,new1);
  cout<<str<<endl;
  //str.erase();//  erase with no value in parameter will erase whole string
  str.erase(18,6);
  cout<<str<<endl;
  cout<<"Size of String:"<<str.size()<<" "<<"Capacity of String:"<<str.capacity();
}

