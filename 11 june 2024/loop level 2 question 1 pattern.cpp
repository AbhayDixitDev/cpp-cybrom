//1>WAP to create a pattern
//     *****
//     
//     ***
//      
//     *

#include <iostream>
using namespace std;
 
int main()
{
    // Number of rows
    int N = 3;
 
    for (int i = N; i >= 1; i--) {
    	
       
           
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << "\n\n";
    }
 
}
