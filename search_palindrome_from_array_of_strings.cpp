//WAP to create a function named search_palindrome (string A[],int size ) in which u have to find out the count of strings which is palindrome and return it.
//string ar[]={“mom”,”Rahul”,”raj”,”nitin”};
//Count=2

#include <iostream>
//#include <string>
using namespace std;

bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;
    while (start <= end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int search_palindrome(string A[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPalindrome(A[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    string A[] = {"moom", "Rahul", "raj", "nittin"};
    int size = sizeof(A) / sizeof(A[0]);

    int count = search_palindrome(A, size);
    cout << "Count of palindrome strings is: " << count << endl;

    return 0;
}