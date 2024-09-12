//Q.6) Create a game character system where characters can have various abilities (e.g., Jump, Attack, Defend). Create a base 
//class Ability with a virtual function perform(). Implement different abilities as derived classes and demonstrate how a character
// can use these abilities through a pointer to the base class. (child class name JumpAbility,AttackAbility,DefendAbility)


#include <iostream>
using namespace std;

// Base class Ability
class Ability {
	
public:
    virtual void perform() = 0;
};

// Derived class JumpAbility
class JumpAbility : public Ability {
public:
    void perform() {
        cout << "Jumping!" << endl;
    }
};

// Derived class AttackAbility
class AttackAbility : public Ability {
public:
    void perform() {
        cout << "Attacking!" << endl;
    }
};

// Derived class DefendAbility
class DefendAbility : public Ability {
public:
    void perform() {
        cout << "Defending!" << endl;
    }
};

// Character class

class Character {
private:
    Ability* ability;
public:
    Character(Ability* a) : ability(a) {}

    void useAbility() {
        ability->perform();
    }
};

int main() {
    // Create abilities
    JumpAbility jump;
    AttackAbility attack;
    DefendAbility defend;

    // Create characters with different abilities
    Character character1(&jump);
    Character character2(&attack);
    Character character3(&defend);

    // Demonstrate character abilities
    character1.useAbility();
    character2.useAbility();
    character3.useAbility();

    return 0;
}