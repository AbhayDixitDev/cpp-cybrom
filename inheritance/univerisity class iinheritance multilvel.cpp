//WAP to create a university class 
//having data member:university_name, address, session, number_of_streams,
//number_of_college_affilated,

//and member functions:
//parameterized constructor(), 
//setter(), getter()
//
//create a child class College having attribute
//data members: college_name, address, number_of_students, 
//
//create a child class Student having attribute
//data members: student_name,address, 

#include<iostream>
using namespace std;

class University{
    private:
    string university_name;
    string address;
    string session;
    int number_of_streams;
    int number_of_college_affilated;
    
    public:
    University(string u_n,string add, string sess, int n_o_s, int n_o_c_a){
        university_name=u_n;
        address=add;
        session=sess;
        number_of_streams=n_o_s;
        number_of_college_affilated=n_o_c_a;
    }
    void getter(){
        cout<<"University Name is:"<< university_name<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"Session"<<session<<endl;
        cout<<"Number of streams:"<<number_of_streams<<endl;
        cout<<"Number of college affilated:"<<number_of_college_affilated<<endl;
    }   
};

class College : public University{
    public:
    College(string u_n,string add, string sess, int n_o_s, int n_o_c_a) 
        : University(u_n, add, sess, n_o_s, n_o_c_a) {}
};

class Student: public College{
    public:
    Student(string u_n,string add, string sess, int n_o_s, int n_o_c_a) 
        : College(u_n, add, sess, n_o_s, n_o_c_a) {}
};

int main(){
    Student obj("RGPV", "Ashram_tiraha", "2023-24", 6, 250);
    obj.getter();
}



