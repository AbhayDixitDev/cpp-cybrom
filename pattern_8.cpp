//Q.4)WAP to draw a pattern
//
//@@@@@
//@   @
//@   @
//@@@@@
//@   @
//@   @
//@@@@@


#include <iostream>
using namespace std;

int main() {
    int n = 3; // number of repetitions

    for (int i = 0; i < n; i++) {
        // top and bottom lines
        cout << "@@@@@@\n";
        // middle lines
        for (int j = 0; j < 2; j++) {
            cout << "@" << string(7, ' ') << "@" << endl;
        }
    }

    return 0;
}