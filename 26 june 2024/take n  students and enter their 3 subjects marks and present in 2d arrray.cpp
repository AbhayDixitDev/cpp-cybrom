//wap to take n numbers of stuents and enter theirs marks in three subjects 
//and show their marks in 2d array
#include<iostream>
using namespace std;
int main()
{  
  int n;
  cout<<"enter how many students appeared in exam:";
  cin>>n;
  int marks[n][3];
  for(int i=0;i<n;i++){
  	for(int j=0;j<3;j++){
  		if(j==0){
  			cout<<"enter marks of subject one for student "<<i+1<<":";
  			cin>>marks[i][j];
		  }
		  if(j==1){
  			cout<<"enter marks of subject two for student "<<i+1<<":";
  			cin>>marks[i][j];
		  }
		  if(j==2){
  			cout<<"enter marks of subject three for student "<<i+1<<":";
  			cin>>marks[i][j];
		  }
	  }
  }
  
  for(int i=0;i<n;i++){
  	cout<<endl<<"student "<<i+1<<" marks is:"<<endl;
  	for(int j=0;j<3;j++){
  		
  		if(j==0){
  			
  			cout<<"marks of subject one: "<<marks[i][j]<<endl;
		  }
		  if(j==1){
  			
  			cout<<"marks of subject two: "<<marks[i][j]<<endl;
		  }
		  if(j==2){
  			
  			cout<<"marks of subject two: "<<marks[i][j]<<endl;
		  }
	  }
  }

}

