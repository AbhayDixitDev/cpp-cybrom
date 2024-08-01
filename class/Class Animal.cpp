//Write a Cpp class named animal constructed by a name, no_legs, category 
//(herbivores, carnivores and omnivores)and two methods  all_details() and category () . 
//Create some instance and display result.
#include <iostream>
using namespace std;

class Animal{
	public:
		string name;
		int number_of_legs;
		string category;
		int choice;
		void insert(){
			cout<<" Enter name of animal:";
			cin>> name;
			cout << " Enter Number of legs of animal:";
			cin >> number_of_legs;
			cout << " For category \n Enter 1 for Herbivores \n Enter 2 for Carnivores \n Enter 3 for Omnivores \n Press any key if dont know :";
			cin >> choice;
		   switch (choice){
			case 1:
				category="Herbivores";
				break;
			case 2:
				category="Carnivores:";
				break;
			case 3:
				category="Omnivores";
				break;
			default:
			    category="Dont_know";
				break;	
		}  
	}
		
		void all_details(){
			cout << "Animal Name :" << name << endl;
			cout << "Number of legs of animal:" << number_of_legs << endl;
			cout << "Category of animal:" << category;
		}
};

int main(){
	Animal animal1;
	animal1.insert();
	animal1.all_details();
}

