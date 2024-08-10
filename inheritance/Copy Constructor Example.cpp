//Copy Constructor example

#include <iostream>
using namespace std;
class Game {
public:
string category;
Game (string cat ) {
category=cat;
}
void display() {
cout<<"this is "<<category<<endl;
}
};
int main() {
Game obj("team mate"), obj2("enemy");
obj.display();
obj2.display();
Game obj3=obj;
Game obj4=obj;
obj3.display();
obj4.display();
Game obj5 (obj2);
obj5.display();
}
