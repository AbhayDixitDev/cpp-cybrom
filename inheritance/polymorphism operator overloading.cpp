//Polymorphism: function overloading, operator overloading, function overriding


         //type of memory store                                       // lifetime:
//code:  function defintion,class defintion          throughout the program
        
//stack:  function call execute                     till function terminate

//Heap:   dynamic memory                    user dependent  if not deallcoate memory cause memory leak / throughtout the program

//global area:    global/static variable/object       throughout the program 


//Operator OverLaoding:
//note: all operator except (scope resolution ::, period operator (.) and .* and ?: operator and two more operator )can be overloaded

//*,+,-,/ and more

#include <iostream>
using namespace std;
class Student{
	void add(){
		cout<<"Addition:";
	}
	public:
		
		void operator+(Student formal){
			cout<<"+operator redefine";
			cout<<"operator overloading";
		}
};   

int main(){
	Student obj1,obj2;
//	obj1.operator+();
		obj1+obj2;
}


