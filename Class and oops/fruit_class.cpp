#include<iostream>
using namespace std;

class Fruits{
	public:
		string name;
		string color;
		string taste;
		string shape;
		double price;
		
		void insert(){
			cout<<"Enter Fruit Name:";
			cin>>name;
			cout<<"Enter Fruit Color:";
			cin>>color;
			cout<<"Enter Fruit taste:";
			cin>>taste;
			cout<<"Enter Fruit Shape:";
			cin>>shape;
			cout<<"Enter Fruit Price:";
			cin>>price;			
		}
		void display(){
			cout<<"Fruit Name:"<<name<<endl;
			cout<<"Fruit Color:"<<color<<endl;
			cout<<"Fruit Taste:"<<taste<<endl;
			cout<<"Fruit Shape:"<<shape<<endl;
			cout<<"Fruit Price:"<<price<<endl;
		}
		void display_Taste(){
			cout<<"Fruit Name:"<<name<<endl;
//			cout<<"Fruit Color:"<<color<<endl;
			cout<<"Fruit Taste:"<<taste<<endl;
//			cout<<"Fruit Shape:"<<shape<<endl;
//			cout<<"Fruit Price:"<<price<<endl;

		}
		void modify_price(){
			cout<<"Fruit Name:"<<name<<endl;
			cout<<"Fruit Cuurent Price:"<<price<<endl;
			cout<<"Modify Fruit Price , Enter Updated Price:";
			cin>>price;
			cout<<"Update Price of Fruit is "<<price<<endl;
		}
};
int main(){
	Fruits obj;
	obj.insert();
	obj.display();
	obj.display_Taste();
	obj.modify_price();
}

