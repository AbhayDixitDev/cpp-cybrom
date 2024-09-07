//Q.5) Write two functions with the same name findMax, one that takes two integers and another that takes two doubles , and returns the maximum of the two.
#include <iostream>
using namespace std;

// Function to find the maximum of two integers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the maximum of two doubles
double findMax(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int int1 = 5, int2 = 10;
    double double1 = 3.5, double2 = 7.2;

    cout << "Maximum of " << int1 << " and " << int2 << " is " << findMax(int1, int2) << endl;
    cout << "Maximum of " << double1 << " and " << double2 << " is " << findMax(double1, double2) << endl;

    return 0;
}