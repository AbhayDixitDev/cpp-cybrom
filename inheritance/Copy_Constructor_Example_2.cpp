#include<iostream>
using namespace std;

class School{
private:

    int *roll;
    string school_name;

public:
    School(int r, string sch){
    school_name=sch;
    roll=new int;
    *roll=r;
    }

    /*School(const School &s1){   //Shallow copy call by reference
    school_name=s1.school_name;
    roll=s1.roll;
    }*/

    School(const School &s1){   // deep copy constrcutor
      school_name=s1.school_name;
      roll=new int;
      *roll=*s1.roll;

    }

    void  change_roll(int d){
    *roll=d;
    }

    void display(){
        cout<<"Roll:"<<*roll<< " School Name :"<<school_name<<endl;
    }


};

int main(){
School s1(101,"kvs");
s1.display();
School s2(s1);
s2.display();

s2.change_roll(102);
s1.display();
s2.display();
}
