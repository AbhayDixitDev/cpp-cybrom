//Class Heirarchy

//File Handling

//input :file read   class: ifstream
//output :file write   class : ofstream

//input/output : file read and write :class fstream



//wap to perform some read and write operation in a file abc.txt
//
//extraction

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main(){
//	ofstream output;   //(mode-> flag)
////	ios::out -> is a write mode
////	output.open("abc.txt",ios::out|ios::trunc); // trunc method set file data to zero than add data to file
//	output.open("abc.txt",ios::out|ios::app);  //append open file with previous data and stores data from previous
//	output<<"abhay dixit\n";
//	output<<"jai shri ram\n";
//	output.close();
//}


#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
  ofstream out;
  string name, address;
  string choice;
  out.open("abc.txt",ios::out|ios::app);
  out<<setw(20)<<"Name"<<setw(20)<<"Address\n";
  while(1){
    cout<<"Enter name and address:";
    cin>>name>>address;
    out<<setw(20)<<name<<setw(20)<<address<<"\n";
    cout<<"type 'exit' for exit,otherwise any character:";
    cin>>choice;
    if(choice=="exit") break;
    cout<<"record inserted";
    
  }
  out.close();

ifstream input;
string data;
input.open("abc.txt");

while(!input.eof()){
	getline(input,data);
	cout<<data<<endl;
}
  
  
}
