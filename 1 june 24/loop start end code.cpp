#include<iostream>
using namespace std;
int main()
{
   int s,e;
   cout<<"enter start and end value for printing between them :";
   cin>>s>>e;
   if(s<e){
   	 for(int i=s;i<=e;i++){
   	cout<<i<<"\n";
   }
   }
  else if(s>e){
  	 for(int i=s;i>=e;i--){
   	cout<<i<<"\n";
   }
  }
  else{
  	cout<<"given numbers are same";
  }
  

}

