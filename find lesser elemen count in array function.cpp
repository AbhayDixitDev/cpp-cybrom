//Q.3> WAP to create a function named search_lesser_element(int A[],int size,int element ) in which u have to find out the count of numbers which is smaller
// then the given element and return it.
//Ex:
//Int ar[]={23,4,55,7,8,99,0};
//Element=20 
//Count=4 

#include <iostream>
using namespace std;

int search_lesser_element(int A[], int size, int element) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] < element) {
            count++;
        }
    }
    return count;
}

int main() {
    int A[] = {23, 4, 55, 7, 8, 99, 0};
    int size = sizeof(A) / sizeof(A[0]);
    int element = 20;

    int count = search_lesser_element(A, size, element);
    cout << "Count of numbers smaller than " << element << " is: " << count << endl;

    return 0;
}