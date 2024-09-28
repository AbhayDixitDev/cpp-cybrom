#include <iostream>
using namespace std;

class Rectangle{
private:
    int *len, *bre;
public:
    Rectangle(int l,int b){
        len=new int;
        *len=l;
        bre =new int;
        *bre=b;
    }
    Rectangle (const Rectangle &temp){ //obj2(obj1);
        len= new int;
        bre=new int;
        *len= *temp.len;
        *bre= *temp.bre;
        len = temp.len;
        bre = temp.bre;
        // obj2 // temp->obj1
    }
    
    void changedirection(int a,int b){
    	*len=a;
    	*bre=b;
	}
	void display(){
		cout<<"length"<<*len<<" breadth:"<<*bre<<endl;
	}
};
int main(){
Rectangle obj1(12,34);
obj1.display();
Rectangle obj2(obj1);
obj2.display();
obj1.changedirection(121,333);
obj1.display();obj2.display();
}