//Virtual Inheritance:

#include<iostream>
using namespace std;

class G{
	public:
		int number;
};

class P1:virtual public G{
	
};
class P2:virtual public G{
	
};

class C:public P1,public P2{
	
};

int main(){
	cout<<"G:"<<sizeof(G)<<endl;
	cout<<"P1:"<<sizeof(P1)<<endl;
	cout<<"P2:"<<sizeof(P2)<<endl;
	cout<<"C:"<<sizeof(C)<<endl;
}
	
