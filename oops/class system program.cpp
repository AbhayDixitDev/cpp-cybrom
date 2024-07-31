#include<iostream>
using namespace std;

class System{
	public:
		string name,category;
		int hard_disk,ram;
		
		void insert_data(){
			cout<<"Enter name and category of system:";
			cin>>name>>category;
			cout<<"Mention its hard disk and RAM:";
			cin>>hard_disk>>ram;
		}
		void  display_data(){
			cout<<"System Name: "<<name<<" and Category :"<<category<<endl;
			cout<<"System harddisk:"<<hard_disk<<" TB "<<" and RAM:"<<ram<<" GB"<<endl;
		}
		void input(){
			cout<<name<<" System taking some input"<<endl;
		}
		void process(){
			cout<<name<<" System Processing"<<endl;
		}
		void output(){
			cout<<name<<" System giving some output"<<endl;
		}
};

int main(){
	System sys1,sys2;
	sys1.insert_data();
	sys1.display_data();
	sys1.input();
	sys1.process();
	sys1.output();
}
