#include <iostream>
using namespace std;

long factorial(int n){
    long result=1;
    for (int i = 1; i <= n; i++){
        result = result*i;
    }
    return result;
}

int main(){
    int n;
    cout << "Enter number for pascal length: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            cout <<" "<< factorial(i) / (factorial(j) * factorial(i - j)) ;
        }
        cout << "\n";
    }
    
}
