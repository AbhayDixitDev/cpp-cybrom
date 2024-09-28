//Access Specifier(Modifier):
//By Default all members of class are private
//we cant take access of private members outside the class

//===========================================================================================
//=Access Specifiers  = Within Class    =  Within Child Class    =   Outside Class          =
//===========================================================================================
//=Private            = Yes             =  No                    =    No                    =
//===========================================================================================
//=Public             = Yes             =  Yes                   =    Yes                   =
//===========================================================================================
//=Protected          = Yes             =  Yes                   =    No                    =
//===========================================================================================

//Note:Generally We Define Data Members as private member and member function() as public.
//Whenever we make data member and member function private , we actually lock our class,
//if we want to take access of private member , it should be done through public member function,
//actually we can take accesss of private member indirectly.



#include<iostream>
using namespace std;

class Employee {
	private:
//protected: 
	int eid;
	
	public:
		void set_id(int id){
			eid=id;
		}
		void get_id(){
			cout<<eid;
		}
};

int main(){
	Employee e1;
	e1.set_id(1000);
	e1.get_id();
}
