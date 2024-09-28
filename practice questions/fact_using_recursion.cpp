//1. Factorial Program Write a recursive function to calculate the factorial of a given integer.

#include <iostream>
using namespace std;

int Fact(int num){
    if(num <1){
        return 1;
    }
    return (num * Fact(num-1));
}

int main(){
    int num;
    cout << "Enter a number for factorial: ";
    cin >> num;
    
    cout << Fact(num);
}

