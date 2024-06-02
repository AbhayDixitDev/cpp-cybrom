// Write a program to check if entered character is vowel or not.
#include <iostream>

using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;


    switch (ch) {
        case 'A': cout << ch << " is a vowel" << endl;
            break;
        case 'E': cout << ch << " is a vowel" << endl;
            break;
        case 'I': cout << ch << " is a vowel" << endl;
            break;
        case 'O': cout << ch << " is a vowel" << endl;
            break;
        case 'U': cout << ch << " is a vowel" << endl;
            break;
        case 'a': cout << ch << " is a vowel" << endl;
            break;
        case 'e': cout << ch << " is a vowel" << endl;
            break;
        case 'i': cout << ch << " is a vowel" << endl;
            break;
        case 'o': cout << ch << " is a vowel" << endl;
            break;
        case 'u': cout << ch << " is a vowel" << endl;
            break;
        default:
        	{
        		if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
        		cout<<ch << " is a consonant";
        		else{
        			cout<<"enter valid input";
				}
			}
           break;
    }
    

    return 0;
}

